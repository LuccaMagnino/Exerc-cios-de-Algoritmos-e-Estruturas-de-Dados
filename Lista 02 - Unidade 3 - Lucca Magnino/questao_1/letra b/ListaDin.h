struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct elemento *ListaDinamica;

ListaDinamica *cria_ListaDinamica();
void libera_ListaDinamica(ListaDinamica *li);
int insere_ListaDinamica(ListaDinamica *li, struct aluno al);
int remove_N_Primeiros(ListaDinamica *li, int N);
int remove_N_Ultimos(ListaDinamica *li, int N);
void imprime_ListaDinamica(ListaDinamica *li);
