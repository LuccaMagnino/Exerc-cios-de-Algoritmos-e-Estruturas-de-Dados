#include <math.h>
#include <stdio.h>

struct coo
{ // coordenadas
    int x;
    int y;
};

int main()
{
    struct coo p; // ponto
    printf("Digite as coordenadas X e Y, respectivamente, do ponto:");
    scanf("%d %d", &p.x, &p.y);

    double d; // distancia ate a origem
    d = sqrt(pow(p.x, 2) + pow(p.y, 2));
    printf("A distancia do ponto (%d, %d) ate a origem e de %.2lf U.D!", p.x, p.y,
           d);
    return 0;
}