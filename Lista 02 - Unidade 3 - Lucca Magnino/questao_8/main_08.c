#include <stdio.h>
#include "Pilha_01.h"

int main()
{
    Pilha *p = cria_Pilha();

    printf("Empilhando...\n");
    empilha(p, 'A');
    empilha(p, 'B');
    empilha(p, 'C');
    empilha(p, 'D');

    if (pilha_vazia(p))
    {
        printf("Vazia! \n");
    }

    printf("Desempilhando...\n");
    while (!pilha_vazia(p))
    {
        char c = p->topo->dado;
        printf("Elemento desempilhado: %c\n", c);
        desempilha(p);
    }

    if (pilha_vazia(p))
    {
        printf("Vazia!\n");
    }

    libera_Pilha(p);

    return 0;
}
