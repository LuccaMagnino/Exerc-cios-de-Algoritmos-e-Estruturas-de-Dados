#include "cubo.h"
#include <stdio.h>
#include <stdlib.h>

struct cubo{
    double lado;
    double AreaCubo;
    double VolumeCubo;
};

Cubo * InicializarCubo(double lado)
{
    Cubo * c = (Cubo*) malloc (sizeof(Cubo));
    c -> lado = lado;
    return (c);
}

void LiberaCubo (Cubo * c)
{
    free(c);
}

double Cubo_pega(Cubo * c)
{
    return (c -> lado);
}

void cubo_atribui (Cubo * c, double lado)
{
    c -> lado = lado;
}

double areaCubo (Cubo * c)
{
    return (6 * (c -> lado * c -> lado));
}

double volumeCubo (Cubo * c)
{
    return (c -> lado * c -> lado * c -> lado);
}