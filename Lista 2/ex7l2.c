#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t; // tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    int *v = (int *)malloc(t * sizeof(int));
    for (int i = 0; i < t; i++)
    {
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("O seu vetor e:");
    for (int i = 0; i < t; i++)
    {
        printf("%d", v[i]);
    }
    free(v);
    return 0;
}
