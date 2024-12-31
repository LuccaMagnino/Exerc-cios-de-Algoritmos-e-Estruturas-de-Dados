#include <stdio.h>
#include <stdlib.h>
#include "Fila_02.h"

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
    return (fi == NULL || fi->tamanho == 0);
}

int intercala_Filas(FilaEstatica *F1, FilaEstatica *F2, FilaEstatica *F3)
{
    if (F1 == NULL || F2 == NULL || F3 == NULL)
    {
        return 0;
    }

    int valor;
    while (!Fila_vazia(F1) || !Fila_vazia(F2))
    {
        if (!Fila_vazia(F1))
        {
            desenfileira(F1, &valor);
            enfileira(F3, valor);
        }
        if (!Fila_vazia(F2))
        {
            desenfileira(F2, &valor);
            enfileira(F3, valor);
        }
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
