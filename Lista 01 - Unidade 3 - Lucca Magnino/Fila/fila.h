#define MAX 100

typedef struct {
    int inicio, fim, tamanho;
    int elementos[MAX];
} Fila;


Fila* criar_fila();
void inicializar_fila(Fila *f);
void liberar_fila(Fila *f);
int tamanho_fila(Fila *f);
int fila_vazia(Fila *f);
int fila_cheia(Fila *f);
int inserir_fila(Fila *f, int valor);
int remover_fila(Fila *f, int *valor);
int consulta_primeiro(Fila *f, int *valor);
void imprimir_fila(Fila *f);

