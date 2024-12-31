#include <stdio.h>
#include <stdlib.h>
#include "Pilha_03.h"

struct Pilha
{
    int dados[TAMANHO_MAX];
    int topo;
};

Pilha *cria_Pilha()
{
    Pilha *pi = (Pilha *)malloc(sizeof(Pilha));
    if (pi != NULL)
    {
        pi->topo = 0;
    }
    return pi;
}

void libera_Pilha(Pilha *pi)
{
    free(pi);
}

int insere_Pilha(Pilha *pi, int valor)
{
    if (pi == NULL || pi->topo == TAMANHO_MAX)
    {
        return 0;
    }
    pi->dados[pi->topo] = valor;
    pi->topo++;
    return 1;
}

int remove_Pilha(Pilha *pi)
{
    if (pi == NULL || pi->topo == 0)
    {
        return 0;
    }
    pi->topo--;
    return 1;
}

int Pilha_vazia(Pilha *pi)
{
    return pi == NULL || pi->topo == 0;
}

int Pilha_cheia(Pilha *pi)
{
    return pi != NULL && pi->topo == TAMANHO_MAX;
}

int consulta_topo_Pilha(Pilha *pi, int *valor)
{
    if (pi == NULL || pi->topo == 0)
    {
        return 0;
    }
    *valor = pi->dados[pi->topo - 1];
    return 1;
}

int contar_impares(Pilha *pi)
{
    int impares = 0;
    int valor;
    Pilha *temp = pi;

    while (!Pilha_vazia(temp))
    {
        consulta_topo_Pilha(temp, &valor);
        if (valor % 2 != 0)
        {
            impares++;
        }
        remove_Pilha(temp);
    }
    return impares;
}
