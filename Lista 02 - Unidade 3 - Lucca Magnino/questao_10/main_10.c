#include <stdio.h>
#include "Pilha_03.h"

int main()
{
    Pilha *pi = cria_Pilha();

    insere_Pilha(pi, 1);
    insere_Pilha(pi, 2);
    insere_Pilha(pi, 3);
    insere_Pilha(pi, 4);
    insere_Pilha(pi, 5);

    printf("Quantidade de impares: %d\n", contar_impares(pi));

    libera_Pilha(pi);
    return 0;
}
