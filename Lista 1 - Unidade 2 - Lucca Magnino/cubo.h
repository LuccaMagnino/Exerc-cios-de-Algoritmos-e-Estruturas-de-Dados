typedef struct cubo Cubo;

Cubo* InicializarCubo (double lado);

void LiberaCubo (Cubo* c);

double Cubo_pega(Cubo * c);

void cubo_atribui (Cubo * c, double lado);
    
double areaCubo (Cubo * cubo);

double volumeCubo (Cubo * cubo);

void ImprimirCubo (Cubo * cubo);