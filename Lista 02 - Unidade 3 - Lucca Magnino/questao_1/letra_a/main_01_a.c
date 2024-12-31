#include <stdio.h>
#include <stdlib.h>
#include "ListaEst.h"

int main()
{
    ListaEstatica *lista = cria_ListaEstatica();

    struct aluno a1 = {1, "Lucca", 3, 8.5, 9};
    struct aluno a2 = {2, "Joao", 6.5, 7, 8};
    struct aluno a3 = {3, "Pedro", 8.5, 8.5, 9.5};

    insere_ListaEstatica(lista, a1);
    insere_ListaEstatica(lista, a2);
    insere_ListaEstatica(lista, a3);

    printf("Lista apos inserir: \n");
    imprime_ListaEstatica(lista);

    remove_N_Primeiros(lista, 2);
    printf("Lista apos remover: \n");
    imprime_ListaEstatica(lista);

    insere_ListaEstatica(lista, a1);
    insere_ListaEstatica(lista, a2);

    remove_N_Ultimos(lista, 2);
    printf("Lista apos remover os dois ultimos:\n");
    imprime_ListaEstatica(lista);

    libera_ListaEstatica(lista);
    return 0;
}
