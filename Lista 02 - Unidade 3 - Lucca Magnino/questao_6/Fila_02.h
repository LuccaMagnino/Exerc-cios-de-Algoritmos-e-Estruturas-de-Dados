#define MAX 100

typedef struct
{
    int elementos[MAX];
    int inicio, fim, tamanho;
} FilaEstatica;

FilaEstatica *cria_FilaEstatica();
void libera_FilaEstatica(FilaEstatica *fi);
int enfileira(FilaEstatica *fi, int valor);
int desenfileira(FilaEstatica *fi, int *valor);
int Fila_vazia(FilaEstatica *fi);
int intercala_Filas(FilaEstatica *F1, FilaEstatica *F2, FilaEstatica *F3);
void imprime_Fila(FilaEstatica *fi);
