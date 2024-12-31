#include <stdio.h>

int main()
{

    int c, i, f, d;
    c = sizeof(char);
    i = sizeof(int);
    f = sizeof(float);
    d = sizeof(double);

    printf("Tamanho de char: %d bytes\n", c);
    printf("Tamanho de int: %d bytes\n", i);
    printf("Tamanho de float: %d bytes\n", f);
    printf("Tamanho de double: %d bytes\n", d);
    return 0;
}