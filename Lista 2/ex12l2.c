#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var, *ptr1, **ptr2, ***ptr3;

    printf("Digite um valor inteiro: ");
    scanf("%d", &var);

    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf("Dobro: %d\n", 2 * *ptr1);
    printf("Triplo: %d\n", 3 * **ptr2);
    printf("Quadruplo: %d\n", 4 * ***ptr3);

    return 0;
}