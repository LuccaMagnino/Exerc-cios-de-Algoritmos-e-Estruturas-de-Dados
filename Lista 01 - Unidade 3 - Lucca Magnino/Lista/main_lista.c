#include <stdio.h>
#include "lista.h"

int main() {
    Lista *l = criar_lista();

    inserir_fim(l, 30);
    inserir_inicio(l, 10);
    inserir_meio_ordenado(l, 20);

    imprimir_lista(l); 

    int indice = consulta_valor(l, 20);
    if (indice != -1) {
        printf("Elemento 20 encontrado no índice: %d\n", indice);
    }

    int valor = consulta_indice(l, 1);
    if (valor != -1) {
        printf("Elemento no índice 1: %d\n", valor);
    }

    remover_inicio(l);
    remover_meio_ordenado(l, 20);
    remover_fim(l);

    imprimir_lista(l);

    printf("Tamanho da lista: %d\n", tamanho_lista(l));

    liberar_lista(l);

    return 0;
}
