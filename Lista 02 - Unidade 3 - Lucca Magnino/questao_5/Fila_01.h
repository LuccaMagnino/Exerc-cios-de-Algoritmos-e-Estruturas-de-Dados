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
int copia_Fila(FilaEstatica *origem, FilaEstatica *destino);
void imprime_Fila(FilaEstatica *fi);
