#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* criar_fila() {
    Fila *f = (Fila*) malloc(sizeof(Fila));
    inicializar_fila(f);
    return f;
}

void inicializar_fila(Fila *f) {
    f->inicio = 0;
    f->fim = -1;
    f->tamanho = 0;
}

void liberar_fila(Fila *f) {
    free(f);
}

int tamanho_fila(Fila *f) {
    return f->tamanho;
}

int fila_vazia(Fila *f) {
    return (f->tamanho == 0);
}

int fila_cheia(Fila *f) {
    return (f->tamanho == MAX);
}

int inserir_fila(Fila *f, int valor) {
    if (fila_cheia(f)) {
        return 0; 
    }
    f->fim = (f->fim + 1) % MAX;
    f->elementos[f->fim] = valor;
    f->tamanho++;
    return 1;
}

int remover_fila(Fila *f, int *valor) {
    if (fila_vazia(f)) {
        return 0; 
    }
    *valor = f->elementos[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->tamanho--;
    return 1; 
}

int consulta_primeiro(Fila *f, int *valor) {
    if (fila_vazia(f)) {
        return 0; 
    }
    *valor = f->elementos[f->inicio];
    return 1; 
}

void imprimir_fila(Fila *f) {
    if (fila_vazia(f)) {
        printf("Vazio\n");
    } else {
        printf("Fila: ");
        for (int i = 0; i < f->tamanho; i++) {
            int idx = (f->inicio + i) % MAX;
            printf("%d ", f->elementos[idx]);
        }
        printf("\n");
    }
}
