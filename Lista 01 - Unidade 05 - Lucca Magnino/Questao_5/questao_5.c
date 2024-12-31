#include <stdio.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[100];
    char classe[100];
} Animal;

void bubbleSortAnimais(Animal animais[], int tamanho)
{
    int i, j;
    Animal auxiliar;
    int trocou;

    for (i = 0; i < tamanho - 1; i++)
    {
        trocou = 0;
        for (j = 0; j < tamanho - i - 1; j++)
        {
            
            if (strcmp(animais[j].nome, animais[j + 1].nome) > 0)
            {
                
                auxiliar = animais[j];
                animais[j] = animais[j + 1];
                animais[j + 1] = auxiliar;
                trocou = 1;
            }
        }
        if (!trocou)
        {
            break; 
        }
    }
}

int main()
{
    int tamanho;

    printf("Digite o numero de animais: \n");
    scanf("%d", &tamanho);

    Animal animais[100];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Animal %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &animais[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]", animais[i].nome); 
        printf("Classe: ");
        scanf(" %[^\n]", animais[i].classe);
    }


    bubbleSortAnimais(animais, tamanho);


    printf("\nLista de animais ordenada:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Codigo: %d, Nome: %s, Classe: %s\n",
               animais[i].codigo,
               animais[i].nome,
               animais[i].classe);
    }

    return 0;
}
