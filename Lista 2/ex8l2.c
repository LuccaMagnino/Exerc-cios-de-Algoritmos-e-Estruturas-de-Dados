#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    int *V;

    do
    {
        printf("Digite um valor inteiro nao negativo para o tamnho do vetor: ");
        scanf("%d", &N);
    } while (N < 0);

    V = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        do
        {
            printf("Digite um valor maior ou igual a 2 para o valor %d: ", i + 1);
            scanf("%d", &V[i]);
        } while (V[i] < 2);
    }

    free(V);
    return 0;
}