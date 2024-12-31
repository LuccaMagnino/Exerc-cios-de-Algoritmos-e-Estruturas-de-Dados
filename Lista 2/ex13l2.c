#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N; // Tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &N);

    int *matriz = (int *)malloc(N * sizeof(int));

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < N; i++)
    {
        int valor;
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            matriz[i] = valor;
        }
        else
        {
            matriz[i] = 0;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", matriz[i]);
    }
    printf("\n");

    free(matriz);

    return 0;
}