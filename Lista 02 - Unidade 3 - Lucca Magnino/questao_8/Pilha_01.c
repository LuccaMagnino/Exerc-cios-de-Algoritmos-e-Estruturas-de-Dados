#include <stdio.h>
#include <stdlib.h>
#include "Pilha_01.h"

Pilha *cria_Pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    p->topo = NULL;
    return p;
}

void libera_Pilha(Pilha *p)
{
    if (p != NULL)
    {
        Elemento *e;
        while (p->topo != NULL)
        {
            e = p->topo;
            p->topo = p->topo->prox;
            free(e);
        }
        free(p);
    }
}

int empilha(Pilha *p, char c)
{
    if (p == NULL)
    {
        return 0;
    }

    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    if (novo == NULL)
    {
        return 0;
    }

    novo->dado = c;
    novo->prox = p->topo;
    p->topo = novo;
    return 1;
}

int desempilha(Pilha *p)
{
    if (p == NULL || pilha_vazia(p))
    {
        return 0;
    }

    Elemento *temp = p->topo;
    p->topo = p->topo->prox;
    free(temp);
    return 1;
}

int pilha_vazia(Pilha *p)
{
    return (p == NULL || p->topo == NULL);
}
