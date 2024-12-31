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

    int digito;
    printf("Digite o digito que sera procurado: ");
    scanf("%d", &digito);

    int auxiliar = 0;
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) //Loop de percorrer
    {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == digito)
        {
            auxiliar = meio;
        }
        if (vetor[meio] < digito)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    if (auxiliar == 0)
    {
        printf("Digito nao encontrado!");
    }
    else
    {
        printf("Digito encontrado no indice: %d", auxiliar);
    }

    return 0;
}

/*Da forma que foi feito, a complexidade sera O(tamanho * log tamanho),
visto que sera o produto complexidade dos dois loops apresentados.*/