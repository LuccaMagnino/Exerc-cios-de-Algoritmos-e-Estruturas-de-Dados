#include <stdio.h>
#include <stdlib.h>
#include "ListaDin.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

ListaDinamica *cria_ListaDinamica()
{
    ListaDinamica *li = (ListaDinamica *)malloc(sizeof(ListaDinamica));
    if (li == NULL)
    {
        printf("Nao alocou!");
        exit(1);
    }
    *li = NULL;
    return li;
}

void libera_ListaDinamica(ListaDinamica *li)
{
    if (li != NULL)
    {
        Elem *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int insere_ListaDinamica(ListaDinamica *li, struct aluno al)
{
    if (li == NULL)
        return 0;
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if (no == NULL)
        return 0;
    no->dados = al;
    no->prox = *li;
    *li = no;
    return 1;
}

int remove_N_Primeiros(ListaDinamica *li, int N)
{
    if (li == NULL || N <= 0)
        return 0;

    Elem *no;
    for (int i = 0; i < N && *li != NULL; i++)
    {
        no = *li;
        *li = (*li)->prox;
        free(no);
    }
    return 1;
}

int remove_N_Ultimos(ListaDinamica *li, int N)
{
    if (li == NULL || N <= 0)
        return 0;

    int tam = 0;
    Elem *aux = *li;
    while (aux != NULL)
    {
        tam++;
        aux = aux->prox;
    }

    if (N >= tam)
    {
        while (*li != NULL)
        {
            aux = *li;
            *li = (*li)->prox;
            free(aux);
        }
    }
    else
    {
        int stop = tam - N;
        aux = *li;
        for (int i = 1; i < stop; i++)
            aux = aux->prox;

        Elem *no;
        while (aux->prox != NULL)
        {
            no = aux->prox;
            aux->prox = no->prox;
            free(no);
        }
    }
    return 1;
}

void imprime_ListaDinamica(ListaDinamica *li)
{
    if (li == NULL)
        return;
    Elem *no = *li;
    while (no != NULL)
    {
        printf("Matricula: %d\n", no->dados.matricula);
        printf("Nome: %s\n", no->dados.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", no->dados.n1, no->dados.n2, no->dados.n3);
        no = no->prox;
    }
}
