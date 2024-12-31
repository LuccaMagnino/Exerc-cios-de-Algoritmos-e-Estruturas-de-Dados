#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int insertionSort(int vetor[], int tamanho)
{
    int trocas = 0;

    for (int i = 1; i < tamanho; i++)
    {
        int atual = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > atual)
        {
            vetor[j + 1] = vetor[j];
            j--;
            trocas++; 
        }

        vetor[j + 1] = atual;
        if (j + 1 != i)
        {
            trocas++;
        }
    }

    return trocas;
}

int selectionSort(int vetor[], int tamanho)
{
    int trocas = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        int menor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }

        if (menor != i)
        {
            int temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
            trocas++;
        }
    }

    return trocas;
}

int main()
{
    int n;
    int vetor[MAX], copia[MAX];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        copia[i] = vetor[i]; 
    }

    int trocasInsertion = insertionSort(vetor, n);

    int trocasSelection = selectionSort(copia, n);

    int diferenca = trocasInsertion - trocasSelection;
    printf("%d\n", diferenca);

    return 0;
}
