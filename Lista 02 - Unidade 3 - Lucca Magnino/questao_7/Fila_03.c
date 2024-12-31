#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fila_03.h"

Fila *cria_Fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f == NULL)
    {
        printf("Erro ao alocar!");
        exit(1);
    }
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void libera_Fila(Fila *f)
{
    if (f != NULL)
    {
        Cliente *temp;
        while (f->inicio != NULL)
        {
            temp = f->inicio;
            f->inicio = f->inicio->prox;
            free(temp);
        }
        free(f);
    }
}

int adicionar_cliente(Fila *f, int codigo, char *nome)
{
    if (f == NULL)
    {
        return 0;
    }

    Cliente *novo_cliente = (Cliente *)malloc(sizeof(Cliente));
    if (novo_cliente == NULL)
    {
        return 0;
    }

    novo_cliente->codigo = codigo;
    strncpy(novo_cliente->nome, nome, TAM_MAX_NOME);
    novo_cliente->prox = NULL;

    if (f->fim == NULL)
    {
        f->inicio = novo_cliente;
    }
    else
    {
        f->fim->prox = novo_cliente;
    }
    f->fim = novo_cliente;
    f->tamanho++;
    return 1;
}

int atender_cliente(Fila *f, int *codigo, char *nome)
{
    if (f == NULL || f->inicio == NULL)
    {
        return 0;
    }

    Cliente *cliente_atendido = f->inicio;
    *codigo = cliente_atendido->codigo;
    strncpy(nome, cliente_atendido->nome, TAM_MAX_NOME);

    f->inicio = cliente_atendido->prox;
    if (f->inicio == NULL)
    {
        f->fim = NULL;
    }

    free(cliente_atendido);
    f->tamanho--;
    return 1;
}

void listar_clientes(Fila *f)
{
    if (f == NULL || f->inicio == NULL)
    {
        printf("Nenhum cliente na fila!");
        return;
    }

    Cliente *temp = f->inicio;
    while (temp != NULL)
    {
        printf("Código: %d - Nome: %s\n", temp->codigo, temp->nome);
        temp = temp->prox;
    }
}

int quantidade_clientes(Fila *f)
{
    if (f == NULL)
    {
        return 0;
    }
    return f->tamanho;
}

float tempo_medio_espera(Fila *f)
{
    if (f == NULL || f->tamanho == 0)
    {
        return 0.0;
    }

    return (f->tamanho * 10.0) / f->tamanho;
}
