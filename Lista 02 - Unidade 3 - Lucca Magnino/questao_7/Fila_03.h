#define TAM_MAX_NOME 100

typedef struct cliente
{
    int codigo;
    char nome[TAM_MAX_NOME];
    struct cliente *prox;
} Cliente;

typedef struct fila
{
    Cliente *inicio;
    Cliente *fim;
    int tamanho;
} Fila;

Fila *cria_Fila();
void libera_Fila(Fila *f);
int adicionar_cliente(Fila *f, int codigo, char *nome);
int atender_cliente(Fila *f, int *codigo, char *nome);
void listar_clientes(Fila *f);
int quantidade_clientes(Fila *f);
float tempo_medio_espera(Fila *f);
