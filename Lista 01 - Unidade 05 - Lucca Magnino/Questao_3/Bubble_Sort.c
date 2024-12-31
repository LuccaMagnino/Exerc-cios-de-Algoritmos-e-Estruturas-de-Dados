#include <stdio.h>

void bubbleSort(int vetor[], int tamanho, int *comparacoes, int *trocas)
{
    int i, j, auxiliar;
    *comparacoes = 0;
    *trocas = 0;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            (*comparacoes)++;
            if (vetor[j] > vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
                (*trocas)++;
            }
        }
    }
}

int main()
{
    int vetor[] = {18, 29, 17, 29, 23, 21, 23, 8, 14, 6};
    int tamanho = 10, comparacoes, trocas; 
    //O tamanho e os valores do vetor variam de acordo com A, B e C


    bubbleSort(vetor, tamanho, &comparacoes, &trocas);

    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Numero de trocas: %d\n", trocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
