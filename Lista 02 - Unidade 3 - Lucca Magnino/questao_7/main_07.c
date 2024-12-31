#include <stdio.h>
#include "Fila_03.h"

int main()
{
    Fila *fila = cria_Fila();

    adicionar_cliente(fila, 1, "Lucca");
    adicionar_cliente(fila, 2, "Joao");
    adicionar_cliente(fila, 3, "Pedro");

    printf("Fila: \n");
    listar_clientes(fila);

    printf("Clientes na fila: %d\n", quantidade_clientes(fila));

    printf("Tempo de espera: %.2f \n", tempo_medio_espera(fila));

    int codigo;
    char nome[TAM_MAX_NOME];
    if (atender_cliente(fila, &codigo, nome))
    {
        printf("Atendeu o cliente %d - %s\n", codigo, nome);
    }
    else
    {
        printf("Ninguem para atender.\n");
    }

    printf("Clientes na fila: \n");
    listar_clientes(fila);

    libera_Fila(fila);

    return 0;
}
