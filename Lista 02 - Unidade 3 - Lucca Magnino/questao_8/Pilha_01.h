typedef struct elemento
{
    char dado;
    struct elemento *prox;
} Elemento;

typedef struct pilha
{
    Elemento *topo;
} Pilha;

Pilha *cria_Pilha();
void libera_Pilha(Pilha *p);
int empilha(Pilha *p, char c);
int desempilha(Pilha *p);
int pilha_vazia(Pilha *p);
