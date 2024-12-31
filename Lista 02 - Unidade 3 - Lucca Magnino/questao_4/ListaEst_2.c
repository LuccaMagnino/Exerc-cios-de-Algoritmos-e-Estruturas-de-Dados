#include <stdio.h>
#include <stdlib.h>
#include "ListaEst_2.h"

ListaEstatica *cria_ListaEstatica()
{
    ListaEstatica *li = (ListaEstatica *)malloc(sizeof(ListaEstatica));
    if (li == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    li->tamanho = 0;
    return li;
}

void libera_ListaEstatica(ListaEstatica *li)
{
    if (li != NULL)
    {
        free(li);
    }
}

int insere_Elemento(ListaEstatica *li, int elemento)
{
    if (li == NULL || li->tamanho >= MAX)
    {
        return 0;
    }
    li->elementos[li->tamanho] = elemento;
    li->tamanho++;
    return 1;
}

int conta_Pares(ListaEstatica *li)
{
    if (li == NULL)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < li->tamanho; i++)
    {
        if (li->elementos[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

float calcula_Media(ListaEstatica *li)
{
    if (li == NULL || li->tamanho == 0)
    {
        return 0;
    }
    int soma = soma_Lista(li);
    return (float)soma / li->tamanho;
}

int maior_Valor(ListaEstatica *li)
{
    if (li == NULL || li->tamanho == 0)
    {
        return 0;
    }
    int maior = li->elementos[0];
    for (int i = 1; i < li->tamanho; i++)
    {
        if (li->elementos[i] > maior)
        {
            maior = li->elementos[i];
        }
    }
    return maior;
}

int menor_Valor(ListaEstatica *li)
{
    if (li == NULL || li->tamanho == 0)
    {
        return 0;
    }
    int menor = li->elementos[0];
    for (int i = 1; i < li->tamanho; i++)
    {
        if (li->elementos[i] < menor)
        {
            menor = li->elementos[i];
        }
    }
    return menor;
}

int posicao_MaiorValor(ListaEstatica *li)
{
    if (li == NULL || li->tamanho == 0)
    {
        return -1;
    }
    int pos = 0;
    for (int i = 1; i < li->tamanho; i++)
    {
        if (li->elementos[i] > li->elementos[pos])
        {
            pos = i;
        }
    }
    return pos;
}

int posicao_MenorValor(ListaEstatica *li)
{
    if (li == NULL || li->tamanho == 0)
    {
        return -1;
    }
    int pos = 0;
    for (int i = 1; i < li->tamanho; i++)
    {
        if (li->elementos[i] < li->elementos[pos])
        {
            pos = i;
        }
    }
    return pos;
}

int soma_Lista(ListaEstatica *li)
{
    if (li == NULL)
    {
        return 0;
    }
    int soma = 0;
    for (int i = 0; i < li->tamanho; i++)
    {
        soma += li->elementos[i];
    }
    return soma;
}

int conta_Primos(ListaEstatica *li)
{
    if (li == NULL)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < li->tamanho; i++)
    {
        if (eh_Primo(li->elementos[i]))
        {
            count++;
        }
    }
    return count;
}

int eh_Primo(int numero)
{
    if (numero < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
