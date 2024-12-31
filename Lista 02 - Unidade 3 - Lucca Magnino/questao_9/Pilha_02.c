#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha_02.h"

#define TAMANHO_MAX 100

struct Pilha
{
    char dados[TAMANHO_MAX];
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
    if (pi != NULL)
    {
        free(pi);
    }
}

int insere_Pilha(Pilha *pi, char valor)
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
    if (pi == NULL || pi->topo == 0)
    {
        return 1;
    }
    return 0;
}

int Pilha_cheia(Pilha *pi)
{
    if (pi == NULL || pi->topo == TAMANHO_MAX)
    {
        return 1;
    }
    return 0;
}

void imprime_Pilha(Pilha *pi)
{
    if (pi != NULL)
    {
        for (int i = 0; i < pi->topo; i++)
        {
            printf("%c", pi->dados[i]);
        }
        printf("\n");
    }
}

int consulta_topo_Pilha(Pilha *pi, char *valor)
{
    if (pi == NULL || pi->topo == 0)
    {
        return 0;
    }
    *valor = pi->dados[pi->topo - 1];
    return 1;
}

int verifica_palindromo(char *palavra)
{
    Pilha *pi = cria_Pilha();
    if (pi == NULL)
    {
        return 0;
    }

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (isalnum(palavra[i]))
        {
            insere_Pilha(pi, tolower(palavra[i]));
        }
    }

    for (int i = 0; i < strlen(palavra); i++)
    {
        if (isalnum(palavra[i]))
        {
            char topo;
            consulta_topo_Pilha(pi, &topo);
            if (tolower(palavra[i]) != topo)
            {
                libera_Pilha(pi);
                return 0;
            }
            remove_Pilha(pi);
        }
    }

    libera_Pilha(pi);
    return 1;
}