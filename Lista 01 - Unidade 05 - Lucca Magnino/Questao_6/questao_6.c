#include <stdio.h>
#include <stdlib.h>

void ordenaCrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                int auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

void ordenaDecrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                int auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int main()
{
    int tamanho, numeros[100];
    int pares[100], impares[100];
    int qtdPares = 0, qtdImpares = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &tamanho);

    printf("Digite os numeros: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
        {
            pares[qtdPares++] = numeros[i];
        }
        else
        {
            impares[qtdImpares++] = numeros[i];
        }
    }

    ordenaCrescente(pares, qtdPares);

    ordenaDecrescente(impares, qtdImpares);

    printf("Pares em ordem crescente:\n");
    for (int i = 0; i < qtdPares; i++)
    {
        printf("%d \n", pares[i]);
    }


    printf("Impares em ordem decrescente:\n");
    for (int i = 0; i < qtdImpares; i++)
    {
        printf("%d \n", impares[i]);
    }

    return 0;
}
