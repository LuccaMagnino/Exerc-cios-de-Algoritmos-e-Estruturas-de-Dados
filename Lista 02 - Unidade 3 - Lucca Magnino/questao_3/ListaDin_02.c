#include <stdio.h>
#include <stdlib.h>
#include "ListaDin_02.h"

struct elemento
{
    struct produto dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

ListaProduto *cria_ListaProduto()
{
    ListaProduto *li = (ListaProduto *)malloc(sizeof(ListaProduto));
    if (li == NULL)
    {
        printf("Erro ao alocar!\n");
        exit(1);
    }
    *li = NULL;
    return li;
}

void libera_ListaProduto(ListaProduto *li)
{
    if (li != NULL)
    {
        Elem *no;
        while (*li != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int cadastra_Produto(ListaProduto *li, struct produto prod)
{
    if (li == NULL)
    {
        return 0;
    }
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if (no == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    no->dados = prod;
    no->prox = *li;
    *li = no;
    return 1;
}

int remove_Produto(ListaProduto *li, int codigo)
{
    if (li == NULL || *li == NULL)
    {
        return 0;
    }
    Elem *ant = NULL;
    Elem *no = *li;

    while (no != NULL && no->dados.codigo != codigo)
    {
        ant = no;
        no = no->prox;
    }

    if (no == NULL)
    {
        return 0;
    }

    if (ant == NULL)
    {
        *li = no->prox;
    }
    else
    {
        ant->prox = no->prox;
    }

    free(no);
    return 1;
}

int busca_ProdutoMenorPreco(ListaProduto *li, struct produto *menor)
{
    if (li == NULL || *li == NULL)
    {
        return 0;
    }

    Elem *no = *li;
    *menor = no->dados;
    no = no->prox;

    while (no != NULL)
    {
        if (no->dados.preco < menor->preco)
        {
            *menor = no->dados;
        }
        no = no->prox;
    }
    return 1;
}

void lista_Produtos(ListaProduto *li)
{
    if (li == NULL)
    {
        return;
    }

    Elem *no = *li;
    while (no != NULL)
    {
        printf("Codigo: %d\n", no->dados.codigo);
        printf("Nome: %s\n", no->dados.nomeProd);
        printf("Preco: %.2f\n", no->dados.preco);
        printf("Quantidade: %d\n", no->dados.qtd);
        no = no->prox;
    }
}
