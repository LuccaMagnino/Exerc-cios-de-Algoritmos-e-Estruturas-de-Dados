#define MAX 100

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct
{
    struct aluno dados[MAX];
    int qtd;
} ListaEstatica;

ListaEstatica *cria_ListaEstatica();
void libera_ListaEstatica(ListaEstatica *li);
int insere_ListaEstatica(ListaEstatica *li, struct aluno al);
int remove_N_Primeiros(ListaEstatica *li, int N);
int remove_N_Ultimos(ListaEstatica *li, int N);
void imprime_ListaEstatica(ListaEstatica *li);
