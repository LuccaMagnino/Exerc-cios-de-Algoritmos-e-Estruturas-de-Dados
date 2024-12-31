#include <stdio.h>
#include <stdlib.h>
#include "ListaEst.h"

ListaEstatica *cria_ListaEstatica()
{
    ListaEstatica *li = (ListaEstatica *)malloc(sizeof(ListaEstatica));
    if (li == NULL)
    {
        printf("Nao alocou!");
        exit(1);
    }
    li->qtd = 0;
    return li;
}

void libera_ListaEstatica(ListaEstatica *li)
{
    free(li);
}

int insere_ListaEstatica(ListaEstatica *li, struct aluno al)
{
    if (li == NULL || li->qtd == MAX)
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int remove_N_Primeiros(ListaEstatica *li, int N)
{
    if (li == NULL || N > li->qtd || N < 0)
        return 0;

    for (int i = 0; i < li->qtd - N; i++)
        li->dados[i] = li->dados[i + N];

    li->qtd -= N;
    return 1;
}

int remove_N_Ultimos(ListaEstatica *li, int N)
{
    if (li == NULL || N > li->qtd || N < 0)
        return 0;

    li->qtd -= N;
    return 1;
}

void imprime_ListaEstatica(ListaEstatica *li)
{
    if (li == NULL)
        return;
    for (int i = 0; i < li->qtd; i++)
    {
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Notas: %.2f, %.2f, %.2f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
}
