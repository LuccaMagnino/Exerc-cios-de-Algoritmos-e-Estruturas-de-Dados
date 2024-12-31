#define TAMANHO_MAX 100

typedef struct Pilha Pilha;

Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);
int insere_Pilha(Pilha* pi, int valor);
int remove_Pilha(Pilha* pi);
int Pilha_vazia(Pilha* pi);
int Pilha_cheia(Pilha* pi);
int consulta_topo_Pilha(Pilha* pi, int* valor);
int contar_impares(Pilha* pi);


