#define MAX 100

typedef struct
{
    int elementos[MAX];
    int tamanho;
} ListaEstatica;

ListaEstatica *cria_ListaEstatica();
void libera_ListaEstatica(ListaEstatica *li);
int insere_Elemento(ListaEstatica *li, int elemento);
int conta_Pares(ListaEstatica *li);
float calcula_Media(ListaEstatica *li);
int maior_Valor(ListaEstatica *li);
int menor_Valor(ListaEstatica *li);
int posicao_MaiorValor(ListaEstatica *li);
int posicao_MenorValor(ListaEstatica *li);
int soma_Lista(ListaEstatica *li);
int conta_Primos(ListaEstatica *li);
int eh_Primo(int numero);
