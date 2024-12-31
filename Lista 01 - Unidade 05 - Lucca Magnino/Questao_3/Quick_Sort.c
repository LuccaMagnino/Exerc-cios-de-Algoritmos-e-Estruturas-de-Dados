#include <stdio.h>

int comparacoes, trocas;

int partition(int vetor[], int low, int high)
{
    int pivot = vetor[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        comparacoes++;
        if (vetor[j] < pivot)
        {
            i++;
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
            trocas++;
        }
    }
    int temp = vetor[i + 1];
    vetor[i + 1] = vetor[high];
    vetor[high] = temp;
    trocas++;
    return i + 1;
}

void quickSort(int vetor[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(vetor, low, high);

        quickSort(vetor, low, pi - 1);
        quickSort(vetor, pi + 1, high);
    }
}

int main()
{
    int vetor[] = {18, 29, 17, 29, 23, 21, 23, 8, 14, 6};
    int n = 10;
    //O tamanho e os valores do vetor variam de acordo com A, B e C

    comparacoes = 0;
    trocas = 0;

    quickSort(vetor, 0, n - 1);

    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Numero de trocas: %d\n", trocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
