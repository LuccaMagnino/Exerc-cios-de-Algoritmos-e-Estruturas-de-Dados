#include <stdio.h>

int testes(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    else
    {
        return testes(n / 2, k - 1) + 1;
    }
}

int main()
{
    int n, k; // capacidade maxima da bomba e numero de baloes
    printf("Digite os valores de n e k: ");
    scanf("%d %d", &n, &k);
    printf("%d\n", testes(n, k));
    return 0;
}