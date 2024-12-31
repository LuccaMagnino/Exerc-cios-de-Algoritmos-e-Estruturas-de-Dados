#include <stdlib.h>
#include <stdio.h>
#include "questao_4.h"

int buscaAproximada(int vetor[], int tamanho, int valores)
{
    int inicio = 0, fim = tamanho - 1, meio, proximo = vetor[0];

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if ((vetor[meio] - valores) < (proximo - valores) ||
            ((vetor[meio] - valores) == (proximo - valores) && vetor[meio] < proximo))
        {
            proximo = vetor[meio];
        }

        if (vetor[meio] == valores)
        {
            return vetor[meio];
        }
        if (vetor[meio] < valores)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    return proximo;
}
