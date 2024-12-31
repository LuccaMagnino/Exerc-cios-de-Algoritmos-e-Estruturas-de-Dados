#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main() {
    Conjunto* conjunto_01;
    if (criaConjunto(&conjunto_01) == FALHA) {
        printf("FALHA\n");
        return 1;
    }

    insereElementoConjunto(5, conjunto_01);
    insereElementoConjunto(10, conjunto_01);
    insereElementoConjunto(15, conjunto_01);

    printf("Conjunto tem %d elementos.\n", tamanhoConjunto(conjunto_01));

    if (conjuntoVazio(conjunto_01)) {
        printf("FALSE\n");
    } else {
        printf("TRUE\n");
    }

    excluirElementoConjunto(10, conjunto_01);
    printf("Conjunto tem %d elementos\n", tamanhoConjunto(conjunto_01));

    if (pertenceConjunto(5, conjunto_01)) {
        printf("Elemento 5 pertence ao conjunto.\n");
    } else {
        printf("Elemento 5 não pertence ao conjunto.\n");
    }

    printf("Quantidade de elementos maiores que 5: %d\n", maior(5, conjunto_01));
    printf("Quantidade de elementos menores que 5: %d\n", menor(5, conjunto_01));

    LiberaConjunto(conjunto_01);
    
    return 0;
}