#define Tamanho_Maximo 100

typedef struct pilha Pilha;

Pilha * cria_pilha();
void inicializa_pilha(Pilha * stack);
void libera_pilha (Pilha * stack);

int tamanho_pilha (Pilha * stack);

