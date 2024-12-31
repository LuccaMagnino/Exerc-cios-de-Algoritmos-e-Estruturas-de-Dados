#include <stdio.h>
#include <stdlib.h>
#include "Fila_01.h"

int main()
{

    FilaEstatica *fila1 = cria_FilaEstatica();
    FilaEstatica *fila2 = cria_FilaEstatica();

    enfileira(fila1, 1);
    enfileira(fila1, 2);
    enfileira(fila1, 3);
    enfileira(fila1, 4);

    printf("Fila 1: ");
    imprime_Fila(fila1);

    int valor;
    desenfileira(fila1, &valor);
    printf("Valor desenfileirado: %d\n", valor);

    printf("Fila 1 tirando um elemento: ");
    imprime_Fila(fila1);

    if (copia_Fila(fila1, fila2))
    {
        printf("Fila 2: ");
        imprime_Fila(fila2);
    }
    else
    {
        printf("Erro ao copiar fila.\n");
    }

    libera_FilaEstatica(fila1);
    libera_FilaEstatica(fila2);

    return 0;
}
