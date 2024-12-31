#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ptr = vetor;

    *(ptr + 1) = 10;
    *(ptr + 3) = 20;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}