#include <stdio.h>
#include <stdlib.h>
#include "questao_4.h"

int main()
{
    int vetor[] = {3, 7, 10, 14, 16};
    int tamanho = 5;
    int valores[] = {11, 5, 14, 13, 2};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Valor mais proximo de %d: %d\n", valores[i], 
        buscaAproximada(vetor, tamanho, valores[i]));
    }

    return 0;
}
