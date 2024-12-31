#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

struct cilindro
{
    double altura;
    double raio;
    double VolumeCilindro;
    double AreaCilindro;
};

Cilindro *InicializarCilindro(double altura, double raio)
{
    Cilindro *cili = (Cilindro *)malloc(sizeof(Cilindro)); //cilindro
    cili->altura = altura;
    cili->raio = raio;
    return (cili);
}

void LiberaCilindro(Cilindro * cili)
{
    free(cili);
}

void CilindroPega(Cilindro * cili, double *raio, double *altura)
{
    *raio = cili -> raio;
    *altura = cili -> altura;
}

double VolumeCilindro(Cilindro * cili)
{
    return (3,14 * cili -> raio * cili -> raio * cili -> altura);
}

double AreaCilindro (Cilindro * cili)
{
    return ((2 * 3,14 * cili -> altura * cili -> raio) + (2 * 3,14 * cili -> raio * cili -> raio));
}