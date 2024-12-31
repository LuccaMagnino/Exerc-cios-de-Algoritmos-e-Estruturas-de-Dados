struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct elemento *ListaDupla;

ListaDupla *cria_ListaDupla();
void libera_ListaDupla(ListaDupla *li);
int insere_ListaDupla(ListaDupla *li, struct aluno al);
int consulta_SucessorAntecessor(ListaDupla *li, int matricula, struct aluno *ant, struct aluno *suc);
void imprime_ListaDupla(ListaDupla *li);
