#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main()
{
    double lado;
    printf("Digite o valor do lado: ");
    scanf("%lf", &lado);

    Cubo *cubo_01;
    cubo_01 = InicializarCubo(lado);

    printf("O tamanho de cada lado e: %.2lf\n", Cubo_pega(cubo_01));
    printf("A area do cubo e: %.2lf U.A\n", areaCubo (cubo_01)); //Unidade de Area
    printf("O volume do cubo e: %.2lf U.V\n", volumeCubo(cubo_01)); //Unidade de Volume

    LiberaCubo(cubo_01);

    return 0;
}