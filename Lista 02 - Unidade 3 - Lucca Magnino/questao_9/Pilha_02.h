#define MAX 100

typedef struct pilha
{
    char dados[MAX];
    int topo;
} Pilha;

Pilha *cria_Pilha();
int pilha_vazia(Pilha *p);
int pilha_cheia(Pilha *p);
int empilha(Pilha *p, char c);
char desempilha(Pilha *p);
int verifica_palindromo(char *palavra);
