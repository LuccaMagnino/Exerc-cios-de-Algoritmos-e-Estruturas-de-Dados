#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y; // Variaveis inteiras
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (&x > &y)
    {
        printf("O endereco de x e maior e equivale a: %p", &x);
    }
    else
    {
        printf("O endereco de y e maior e equivale a: %p", &y);
    }

    return 0;
}