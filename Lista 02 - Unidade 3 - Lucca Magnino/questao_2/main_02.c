#include <stdio.h>
#include <stdlib.h>
#include "ListaEnc.h"

int main()
{
    ListaDupla *lista = cria_ListaDupla();

    struct aluno a1 = {1, "Lucca", 3, 8.5, 9};
    struct aluno a2 = {2, "Joao", 6.5, 7, 8};
    struct aluno a3 = {3, "Pedro", 8.5, 8.5, 9.5};

    insere_ListaDupla(lista, a1);
    insere_ListaDupla(lista, a2);
    insere_ListaDupla(lista, a3);

    printf("Lista apos inserir: \n");
    imprime_ListaDupla(lista);

    struct aluno ant, suc;
    int matricula = 2;
    if (consulta_SucessorAntecessor(lista, matricula, &ant, &suc))
    {
        printf("\nPara o aluno %d:\n", matricula);
        if (&ant != NULL)
            printf("Antecessor - Matricula: %d, Nome: %s\n", ant.matricula, ant.nome);
        else
            printf("ERRO! \n");

        if (&suc != NULL)
            printf("Sucessor - Matricula: %d, Nome: %s\n", suc.matricula, suc.nome);
        else
            printf("ERRO! \n");
    }
    else
    {
        printf("Aluno %d nao encontrado.\n", matricula);
    }

    libera_ListaDupla(lista);
    return 0;
}
