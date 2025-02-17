#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar)
{
    if (n == 1)
    {
        printf("(%c,%c)\n", origem, destino);
    }
    else
    {
        hanoi(n - 1, origem, auxiliar, destino);
        printf("(%c,%c)\n", origem, destino);
        hanoi(n - 1, auxiliar, destino, origem);
    }
}

int main()
{
    int n;
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    hanoi(n, 'O', 'D', 'A');
    return 0;
}