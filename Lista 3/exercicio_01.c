#include <stdio.h>

int naturais(int n, int x)
{
    
    if (x == n)
    {
        printf("%d ", x);
        return 0;
    }
    printf("%d ", x);
    return naturais(n, x + 1);
}

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Segue sua sequencia: ");
    naturais(n, 1);
    return 0;
}