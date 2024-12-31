#include <stdio.h>

int reverso(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 10 && n != 0)
    {
        printf("%d", n);
        return n;
    }
    else
    {
        printf("%d", n % 10);
        return reverso (n / 10);
    }
}

int main()
{
    int n;
    printf("Digite o numero a ser invertido: ");
    scanf("%d", &n);
    reverso(n);
    return 0;
}