#include <stdio.h>
#include <math.h>

typedef struct
{
    double xa;
    double ya;
    double xb;
    double yb;
} coor; // coordenadas

int main()
{
    printf("Vamos calcular a distancia entre os pontos A e B\n");
    coor pontos;
    printf("Insira as coordenadas X e Y do ponto A, respectivamente:\n");
    scanf("%lf %lf", &pontos.xa, &pontos.ya);
    printf("Insira as coordenadas X e Y do ponto B, respectivamente:\n");
    scanf("%lf %lf", &pontos.xb, &pontos.yb);
    double d; // distancia
    d = sqrt(pow(pontos.xb - pontos.xa, 2) + pow(pontos.yb - pontos.ya, 2));

    printf("A distancia entre os pontos A e B e: %.2lf", d); // U.D = Unidade de Distancia
    return 0;
}
