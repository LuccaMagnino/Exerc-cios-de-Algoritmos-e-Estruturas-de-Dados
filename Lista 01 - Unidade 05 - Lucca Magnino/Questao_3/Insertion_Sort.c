#include <stdio.h>

void insertionSort(int vetor[], int tamanho, int *comparacoes, int *trocas)
{
    int i, j, no;
    *comparacoes = 0;
    *trocas = 0;

    for (i = 1; i < tamanho; i++)
    {
        no = vetor[i];
        j = i - 1;

        while (j >= 0)
        {
            (*comparacoes)++;
            if (vetor[j] > no)
            {
                vetor[j + 1] = vetor[j];
                (*trocas)++;
                j--;
            }
            else
            {
                break;
            }
        }
        vetor[j + 1] = no;
    }
}

int main()
{
    int vetor[] = {18, 29, 17, 29, 23, 21, 23, 8, 14, 6};
    int tamanho = 10, comparacoes, trocas;
    //O tamanho e os valores do vetor variam de acordo com A, B e C

    insertionSort(vetor, tamanho, &comparacoes, &trocas);

    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Numero de trocas: %d\n", trocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
