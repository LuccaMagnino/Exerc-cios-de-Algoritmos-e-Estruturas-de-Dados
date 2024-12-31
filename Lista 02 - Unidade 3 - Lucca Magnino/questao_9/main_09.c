#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha_02.h"

int main()
{

    Pilha *p = cria_Pilha();

    printf("Empilhando...\n");
    insere_Pilha(p, 'A');
    insere_Pilha(p, 'B');
    insere_Pilha(p, 'C');
    insere_Pilha(p, 'D');

    printf("Pilha: ");
    imprime_Pilha(p);

    printf("Desempilhando elementos...\n");
    while (!Pilha_vazia(p))
    {
        char topo;
        consulta_topo_Pilha(p, &topo);
        printf("Topo: %c\n", topo);
        remove_Pilha(p);
    }

    if (Pilha_vazia(p))
    {
        printf("Vazia! \n");
    }

    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    if (verifica_palindromo(palavra))
    {
        printf("A palavra '%s' e um palindromo.\n", palavra);
    }
    else
    {
        printf("A palavra '%s' nao e um palindromo.\n", palavra);
    }

    libera_Pilha(p);

    return 0;
}
