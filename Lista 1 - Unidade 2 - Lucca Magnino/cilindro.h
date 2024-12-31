typedef struct cilindro Cilindro;

Cilindro* InicializarCilindro (double altura, double raio);

void LiberaCilindro (Cilindro * cili);

void CilindroPega (Cilindro * cili, double *raio, double *altura);

double VolumeCilindro (Cilindro * cili);

double AreaCilindro (Cilindro * cili);