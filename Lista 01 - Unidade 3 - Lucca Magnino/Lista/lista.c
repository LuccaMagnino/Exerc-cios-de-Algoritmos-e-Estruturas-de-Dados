#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* criar_lista() {
    Lista *l = (Lista*) malloc(sizeof(Lista));
    inicializar_lista(l);
    return l;
}

void inicializar_lista(Lista *l) {
    l->tamanho = 0;
}

void liberar_lista(Lista *l) {
    free(l);
}

int tamanho_lista(Lista *l) {
    return l->tamanho;
}

int lista_vazia(Lista *l) {
    return (l->tamanho == 0);
}

int lista_cheia(Lista *l) {
    return (l->tamanho == MAX);
}

int inserir_inicio(Lista *l, int valor) {
    if (lista_cheia(l)) {
        return 0; 
    }
    for (int i = l->tamanho; i > 0; i--) {
        l->elementos[i] = l->elementos[i-1];
    }
    l->elementos[0] = valor;
    l->tamanho++;
    return 1; 
}

int inserir_meio_ordenado(Lista *l, int valor) {
    if (lista_cheia(l)) {
        return 0; 
    }
    int i = 0;
    while (i < l->tamanho && l->elementos[i] < valor) {
        i++;
    }
    for (int j = l->tamanho; j > i; j--) {
        l->elementos[j] = l->elementos[j-1];
    }
    l->elementos[i] = valor;
    l->tamanho++;
    return 1; 
}

int inserir_fim(Lista *l, int valor) {
    if (lista_cheia(l)) {
        return 0;
    }
    l->elementos[l->tamanho] = valor;
    l->tamanho++;
    return 1; 
}

int remover_inicio(Lista *l) {
    if (lista_vazia(l)) {
        return 0; 
    }
    for (int i = 0; i < l->tamanho - 1; i++) {
        l->elementos[i] = l->elementos[i+1];
    }
    l->tamanho--;
    return 1; 
}

int remover_meio_ordenado(Lista *l, int valor) {
    if (lista_vazia(l)) {
        return 0; 
    }
    int i = 0;
    while (i < l->tamanho && l->elementos[i] != valor) {
        i++;
    }
    if (i == l->tamanho) {
        return 0; 
    }
    for (int j = i; j < l->tamanho - 1; j++) {
        l->elementos[j] = l->elementos[j+1];
    }
    l->tamanho--;
    return 1;
}

int remover_fim(Lista *l) {
    if (lista_vazia(l)) {
        return 0; 
    }
    l->tamanho--;
    return 1; 
}

int consulta_valor(Lista *l, int valor) {
    for (int i = 0; i < l->tamanho; i++) {
        if (l->elementos[i] == valor) {
            return i; 
        }
    }
    return -1; 
}

int consulta_indice(Lista *l, int indice) {
    if (indice < 0 || indice >= l->tamanho) {
        return -1; 
    }
    return l->elementos[indice];
}

void imprimir_lista(Lista *l) {
    if (lista_vazia(l)) {
        printf("Vazio\n");
    } else {
        printf("Lista: ");
        for (int i = 0; i < l->tamanho; i++) {
            printf("%d ", l->elementos[i]);
        }
        printf("\n");
    }
}
