#include <stdio.h>

int comparacoes, trocas;

void merge(int vetor[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = vetor[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = vetor[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        comparacoes++;
        if (L[i] <= R[j])
        {
            vetor[k++] = L[i++];
        }
        else
        {
            vetor[k++] = R[j++];
        }
        trocas++;
    }

    while (i < n1)
    {
        vetor[k++] = L[i++];
        trocas++;
    }

    while (j < n2)
    {
        vetor[k++] = R[j++];
        trocas++;
    }
}

void mergeSort(int vetor[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(vetor, l, m);
        mergeSort(vetor, m + 1, r);
        merge(vetor, l, m, r);
    }
}

int main()
{
    int vetor[] = {18, 29, 17, 29, 23, 21, 23, 8, 14, 6};
    int n = 10;

    comparacoes = 0;
    trocas = 0;

    mergeSort(vetor, 0, n - 1);

    printf("Numero de comparacoes: %d\n", comparacoes);
    printf("Numero de trocas: %d\n", trocas);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
