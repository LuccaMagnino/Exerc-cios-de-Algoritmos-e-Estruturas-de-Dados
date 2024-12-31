#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main()
{

    double raio, altura;
    printf("Digite o valor da altura e do raio do cilindro: ");
    scanf("%lf %lf", &raio, &altura);

    Cilindro *cilindro_01;
    cilindro_01 = InicializarCilindro(altura , raio);

    CilindroPega (cilindro_01, &raio, &altura);

    printf("O tamanho da altura e do raio e: %.2lf e %.2lf\n", raio, altura);
    printf("A area do cilindro e: %.2lf U.A\n", AreaCilindro (cilindro_01)); //Unidade de Area
    printf("O volume do cilindro e: %.2lf U.V\n", VolumeCilindro(cilindro_01)); //Unidade de Volume

    LiberaCilindro(cilindro_01);
    return 0;
}