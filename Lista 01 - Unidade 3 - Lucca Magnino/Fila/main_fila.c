#include <stdio.h>
#include "fila.h"

int main() {
    Fila *f = criar_fila();

    inserir_fila(f, 10);
    inserir_fila(f, 20);
    inserir_fila(f, 30);
    
    imprimir_fila(f); 

    int primeiro;
    if (consulta_primeiro(f, &primeiro)) {
        printf("Primeiro elemento: %d\n", primeiro);
    }

    int removido;
    if (remover_fila(f, &removido)) {
        printf("Elemento removido: %d\n", removido);
    }

    imprimir_fila(f); 

    printf("Tamanho da fila: %d\n", tamanho_fila(f));

    liberar_fila(f);

    return 0;
}
