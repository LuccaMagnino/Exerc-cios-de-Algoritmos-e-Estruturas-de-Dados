#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"

int main()
{
    double raio;
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    Esfera *esfera_01;
    esfera_01 = Inicializar_Esfera(raio);

    printf("O raio equivale a: %.2lf\n", Esfera_Pega(esfera_01));
    printf("A area da esfera e: %.2lf U.A\n", Area_Esfera(esfera_01));
    printf("O volume da esfera e: %.2lf U.V\n", Volume_Esfera(esfera_01));

    Libera_Esfera(esfera_01);

    return 0;
}