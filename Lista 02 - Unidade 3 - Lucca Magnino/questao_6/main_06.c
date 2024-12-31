#include <stdio.h>
#include <stdlib.h>
#include "Fila_02.h"

int main()
{

    FilaEstatica *F1 = cria_FilaEstatica();
    FilaEstatica *F2 = cria_FilaEstatica();
    FilaEstatica *F3 = cria_FilaEstatica();

    enfileira(F1, 1);
    enfileira(F1, 2);
    enfileira(F1, 3);
    enfileira(F1, 4);

    enfileira(F2, 5);
    enfileira(F2, 6);
    enfileira(F2, 7);
    enfileira(F2, 8);

    printf("Fila F1: ");
    imprime_Fila(F1);

    printf("Fila F2: ");
    imprime_Fila(F2);

    if (intercala_Filas(F1, F2, F3))
    {
        printf("Fila F3 intercalando F1 e F2: ");
        imprime_Fila(F3);
    }
    else
    {
        printf("Erro!\n");
    }

    libera_FilaEstatica(F1);
    libera_FilaEstatica(F2);
    libera_FilaEstatica(F3);

    return 0;
}
