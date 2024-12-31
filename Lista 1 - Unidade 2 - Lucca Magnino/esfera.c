#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"

struct esfera{
    double raio;
};

Esfera * Inicializar_Esfera (double raio)
{
    Esfera * esf = (Esfera*) malloc (sizeof(Esfera));
    esf -> raio = raio;
    return (esf);
}

void Libera_Esfera (Esfera * esf)
{
    free(esf);
}

double Esfera_Pega (Esfera * esf)
{
    return (esf -> raio);
}

void Esfera_Atribui (Esfera * esf, double raio)
{
    esf -> raio = raio;
}

double Area_Esfera (Esfera * esf)
{
    return (4 * 3.1415 * esf -> raio * esf -> raio);
}

double Volume_Esfera (Esfera * esf)
{
    return ((4 * 3.1415 * esf -> raio * esf -> raio * esf -> raio)/3);
}
