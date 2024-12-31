#define MAX 100

typedef struct {
    int elementos[MAX];
    int tamanho;
} Lista;

Lista* criar_lista();
void inicializar_lista(Lista *l);
void liberar_lista(Lista *l);
int tamanho_lista(Lista *l);
int lista_vazia(Lista *l);
int lista_cheia(Lista *l);
int inserir_inicio(Lista *l, int valor);
int inserir_meio_ordenado(Lista *l, int valor);
int inserir_fim(Lista *l, int valor);
int remover_inicio(Lista *l);
int remover_meio_ordenado(Lista *l, int valor);
int remover_fim(Lista *l);
int consulta_valor(Lista *l, int valor);
int consulta_indice(Lista *l, int indice);
void imprimir_lista(Lista *l);
