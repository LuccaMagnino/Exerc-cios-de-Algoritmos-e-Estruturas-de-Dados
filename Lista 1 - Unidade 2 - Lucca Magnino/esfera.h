#define pi = 3.1415;

typedef struct esfera Esfera;

Esfera* Inicializar_Esfera (double raio);

void Libera_Esfera (Esfera* esf);

double Esfera_Pega (Esfera * esf);

void Esfera_Atribui (Esfera * esf, double raio);

double Area_Esfera (Esfera * esf);

double Volume_Esfera (Esfera * esf);

