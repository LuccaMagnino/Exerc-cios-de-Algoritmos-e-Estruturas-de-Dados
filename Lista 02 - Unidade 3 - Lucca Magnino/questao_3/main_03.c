#include <stdio.h>
#include <stdlib.h>
#include "ListaDin_02.h"

int main()
{
    ListaProduto *lista = cria_ListaProduto();

    struct produto p1 = {1, "Coca", 5.50, 10};
    struct produto p2 = {2, "Guarana", 7.30, 20};
    struct produto p3 = {3, "Fanta", 4.75, 15};

    cadastra_Produto(lista, p1);
    cadastra_Produto(lista, p2);
    cadastra_Produto(lista, p3);

    printf("Lista de todos os produtos: \n");
    lista_Produtos(lista);

    struct produto menor;
    if (busca_ProdutoMenorPreco(lista, &menor))
    {
        printf("Produto mais barato:\n");
        printf("Codigo: %d\n", menor.codigo);
        printf("Nome: %s\n", menor.nomeProd);
        printf("Preco: %.2f\n", menor.preco);
        printf("Quantidade: %d\n", menor.qtd);
    }
    else
    {
        printf("Sem produtos!\n");
    }

    int codigoParaRemover = 2;
    if (remove_Produto(lista, codigoParaRemover))
    {
        printf("Produto com codigo %d removido.\n", codigoParaRemover);
    }
    else
    {
        printf("Produto com codigo %d nao encontrado.\n", codigoParaRemover);
    }

    printf("Lista de produtos apos remocao: \n");
    lista_Produtos(lista);

    libera_ListaProduto(lista);

    return 0;
}
