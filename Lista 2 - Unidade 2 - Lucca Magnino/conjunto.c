#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

#define SUCESSO 1
#define FALHA 0
#define TRUE 1
#define FALSE 0

struct conjunto
{
    int *x;
    int tamanho;
    int capacidade;
};

Conjunto criaConjunto(Conjunto *C)
{
    *C = (Conjunto *)malloc(sizeof(Conjunto));
    if (C == NULL)
        return FALHA;

    C->x = (int *)malloc(1000 * sizeof(int));
    if ((*C)->x == NULL)
    {
        free(*C);
        return FALHA;
    }

    C->tamanho = 0;
    C->capacidade = 1000;
    return SUCESSO;
}

int conjuntoVazio(Conjunto *C)
{
    return (C->tamanho == 0) ? TRUE : FALSE;
}

int pertenceConjunto(int x, Conjunto *C)
{
    for (int i = 0; i < C->tamanho; i++)
    {
        if (C->x[i] == x)
            return TRUE;
    }
    return FALSE;
}

int insereElementoConjunto(int x, Conjunto *C)
{
    if (C == NULL || pertenceConjunto(x, C))
        return FALHA;

    if (C->tamanho == C->capacidade)
    {
        int *novoArray = (int *)realloc(C->x, 2 * C->capacidade * sizeof(int));
        if (novoArray == NULL)
            return FALHA;
        C->x = novoArray;
        C->capacidade *= 2;
    }

    C->x[C->tamanho] = x;
    C->tamanho++;
    return SUCESSO;
}

int excluirElementoConjunto(int x, Conjunto *C)
{
    if (!pertenceConjunto(x, C))
        return FALHA;

    int i = 0;
    while (C->x[i] != x)
    {

        i++;
    }

    for (; i < C->tamanho - 1; i++)
    {
        C->x[i] = C->x[i + 1];
    }
    C->tamanho--;
    return SUCESSO;
}

int tamanhoConjunto(Conjunto *C)
{
    return C->tamanho;
}

int maior(int x, Conjunto *C)
{
    int count = 0;
    for (int i = 0; i < C->tamanho; i++)
    {
        if (C->x[i] > x)
            count++;
    }
    return count;
}

int menor(int x, Conjunto *C)
{
    int count = 0;
    for (int i = 0; i < C->tamanho; i++)
    {
        if (C->x[i] < x)
            count++;
    }
    return count;
}

int conjuntosIdenticos(Conjunto *C1, Conjunto *C2)
{
    if (C1->tamanho != C2->tamanho)
        return FALSE;

    for (int i = 0; i < C1->tamanho; i++)
    {
        if (!pertenceConjunto(C1->x[i], C2))
            return FALSE;
    }

    return TRUE;
}

int subconjunto(Conjunto *C1, Conjunto *C2)
{
    for (int i = 0; i < C1->tamanho; i++)
    {
        if (!pertenceConjunto(C1->x[i], C2))
            return FALSE;
    }
    return TRUE;
}

void LiberaConjunto (Conjunto * C)
{
    free(C);
}
