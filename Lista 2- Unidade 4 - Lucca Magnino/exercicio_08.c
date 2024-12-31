#include <stdio.h>

int main()
{

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < tamanho - 1; i++) // Loop de leitura ate tamanho - 1
    { 
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho - 1; i++) // Loop para percorrer o vetor ate o tamanho - 1
    { 
        if (vetor[i] < vetor[i + 1])
        {
            printf("ORDENADO");
            break;
        }
    }

    return 0;
}

/*Chamando a variavel "tamanho" de N, teremos uma complexidade O((N)²).
Visto que no pior dos casos, ambos os loops indicados irao ser percorridos
ate o final, ou seja, N - 1 */
