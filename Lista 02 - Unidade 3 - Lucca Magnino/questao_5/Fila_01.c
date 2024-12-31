#include <stdio.h>
#include <stdlib.h>
#include "Fila_01.h"

FilaEstatica *cria_FilaEstatica()
{
    FilaEstatica *fi = (FilaEstatica *)malloc(sizeof(FilaEstatica));
    if (fi == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    fi->inicio = 0;
    fi->fim = 0;
    fi->tamanho = 0;
    return fi;
}

void libera_FilaEstatica(FilaEstatica *fi)
{
    if (fi != NULL)
    {
        free(fi);
    }
}

int enfileira(FilaEstatica *fi, int valor)
{
    if (fi == NULL || fi->tamanho == MAX)
    {
        return 0;
    }
    fi->elementos[fi->fim] = valor;
    fi->fim = (fi->fim + 1) % MAX;
    fi->tamanho++;
    return 1;
}

int desenfileira(FilaEstatica *fi, int *valor)
{
    if (fi == NULL || fi->tamanho == 0)
    {
        return 0;
    }
    *valor = fi->elementos[fi->inicio];
    fi->inicio = (fi->inicio + 1) % MAX;
    fi->tamanho--;
    return 1;
}

int Fila_vazia(FilaEstatica *fi)
{
    if (fi == NULL || fi->tamanho == 0)
    {
        return 1;
    }
    return 0;
}

int copia_Fila(FilaEstatica *origem, FilaEstatica *destino)
{
    if (origem == NULL || destino == NULL || origem->tamanho > (MAX - destino->tamanho))
    {
        return 0;
    }
    int i = origem->inicio;
    for (int count = 0; count < origem->tamanho; count++)
    {
        enfileira(destino, origem->elementos[i]);
        i = (i + 1) % MAX;
    }
    return 1;
}

void imprime_Fila(FilaEstatica *fi)
{
    if (fi == NULL)
    {
        return;
    }
    int i = fi->inicio;
    for (int count = 0; count < fi->tamanho; count++)
    {
        printf("%d ", fi->elementos[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}
