#include <stdio.h>
#include <stdlib.h>
#include "ListaEnc.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
    struct elemento *ant;
};

typedef struct elemento Elem;

ListaDupla *cria_ListaDupla()
{
    ListaDupla *li = (ListaDupla *)malloc(sizeof(ListaDupla));
    if (li == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    *li = NULL;
    return li;
}

void libera_ListaDupla(ListaDupla *li)
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

int insere_ListaDupla(ListaDupla *li, struct aluno al)
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
    no->dados = al;
    no->prox = *li;
    no->ant = NULL;
    if (*li != NULL)
    {
        (*li)->ant = no;
    }
    *li = no;
    return 1;
}

int consulta_SucessorAntecessor(ListaDupla *li, int matricula, struct aluno *ant, struct aluno *suc)
{
    if (li == NULL || *li == NULL)
    {
        return 0;
    }

    Elem *no = *li;
    while (no != NULL && no->dados.matricula != matricula)
    {
        no = no->prox;
    }

    if (no == NULL)
    {
        return 0;
    }

    if (no->ant != NULL)
    {
        *ant = no->ant->dados;
    }
    else
    {
        ant = NULL;
    }

    if (no->prox != NULL)
    {
        *suc = no->prox->dados;
    }
    else
    {
        suc = NULL;
    }

    return 1;
}

void imprime_ListaDupla(ListaDupla *li)
{
    if (li == NULL)
    {
        return;
    }
    Elem *no = *li;
    while (no != NULL)
    {
        printf("Matricula: %d\n", no->dados.matricula);
        printf("Nome: %s\n", no->dados.nome);
        printf("Notas: %.1f, %.1f, %.1f\n", no->dados.n1, no->dados.n2, no->dados.n3);
        no = no->prox;
    }
}
