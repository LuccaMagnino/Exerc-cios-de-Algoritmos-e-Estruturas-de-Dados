#include <stdio.h>

int ackermann(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    if (n == 0 && m > 0)
    {
        return ackermann(m - 1, 1);
    }
    if (n > 0 && m > 0)
    {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main()
{
    int m, n;
    printf("Digite os valores de m e n para a funcao: ");
    scanf("%d %d", &m, &n);
    printf("%d", ackermann(m, n));
    return 0;
}