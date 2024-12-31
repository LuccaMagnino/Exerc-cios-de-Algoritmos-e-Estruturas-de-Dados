#include <stdio.h>
#include <stdlib.h>
#include "ListaEst_2.h"

int main()
{
    ListaEstatica *lista = cria_ListaEstatica();

    insere_Elemento(lista, 10);
    insere_Elemento(lista, 31);
    insere_Elemento(lista, 77);
    insere_Elemento(lista, 69);
    insere_Elemento(lista, 11);

    printf("Numeros da lista: ");
    for (int i = 0; i < lista->tamanho; i++)
    {
        printf("%d ", lista->elementos[i]);
    }

    printf("Numeros pares: %d\n", conta_Pares(lista));

    printf("Media: %.2f\n", calcula_Media(lista));

    printf("Maior valor: %d\n", maior_Valor(lista));
    printf("Menor valor: %d\n", menor_Valor(lista));

    printf("Posicao do maior valor: %d\n", posicao_MaiorValor(lista));
    printf("Posicao do menor valor: %d\n", posicao_MenorValor(lista));

    printf("Soma dos elementos: %d\n", soma_Lista(lista));

    printf("Quantidade de numeros primos: %d\n", conta_Primos(lista));

    libera_ListaEstatica(lista);

    return 0;
}
