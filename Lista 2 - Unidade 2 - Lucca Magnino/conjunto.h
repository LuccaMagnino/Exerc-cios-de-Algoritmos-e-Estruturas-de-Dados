#define SUCESSO 1
#define FALHA 0
#define TRUE 1
#define FALSE 0

typedef struct conjunto Conjunto;

Conjunto criaConjunto (double x);

int conjuntoVazio(Conjunto* C);

int insereElementoConjunto(double x, Conjunto * C);

int excluirElementoConjunto(double x, Conjunto * C);

int tamanhoConjunto(Conjunto * C);

int maior(double x, Conjunto *  C);

int menor(double x, Conjunto * C);

int pertenceConjunto(double x, Conjunto * C);

int conjuntosIdenticos(Conjunto * C1, Conjunto * C2);

int subconjunto(Conjunto * C1, Conjunto * C2);

void LiberaConjunto (Conjunto * C)