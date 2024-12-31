
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y; // Variaveis inteiras
    printf("Digite o primeiro inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &y);

    if (&x > &y)
    {
        printf("O endereco de x e maior: %p\n", &x);
    }
    else
    {
        printf("O endereco de y e maior: %p\n", &y);
    }

    return 0;
}