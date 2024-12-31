#include <stdio.h>
#include <stdlib.h>
#include "ListaDin.h"

int main()
{
    ListaDinamica *lista = cria_ListaDinamica();

    struct aluno a1 = {1, "Lucca", 3, 8.5, 9};
    struct aluno a2 = {2, "Joao", 6.5, 7, 8};
    struct aluno a3 = {3, "Pedro", 8.5, 8.5, 9.5};

    insere_ListaDinamica(lista, a1);
    insere_ListaDinamica(lista, a2);
    insere_ListaDinamica(lista, a3);

    printf("Lista apos inserir: \n");
    imprime_ListaDinamica(lista);

    remove_N_Primeiros(lista, 2);
    printf("Lista apos remover: \n");
    imprime_ListaDinamica(lista);

    insere_ListaDinamica(lista, a1);
    insere_ListaDinamica(lista, a2);

    remove_N_Ultimos(lista, 2);
    printf("\nLista apos remover os ultimos alunos: \n");
    imprime_ListaDinamica(lista);

    libera_ListaDinamica(lista);
    return 0;
}
