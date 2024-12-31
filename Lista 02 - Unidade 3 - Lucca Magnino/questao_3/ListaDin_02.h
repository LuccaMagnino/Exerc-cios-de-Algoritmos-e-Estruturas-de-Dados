struct produto
{
    int codigo;
    char nomeProd[30];
    float preco;
    int qtd;
};

typedef struct elemento *ListaProduto;

ListaProduto *cria_ListaProduto();
void libera_ListaProduto(ListaProduto *li);
int cadastra_Produto(ListaProduto *li, struct produto prod);
int remove_Produto(ListaProduto *li, int codigo);
int busca_ProdutoMenorPreco(ListaProduto *li, struct produto *menor);
void lista_Produtos(ListaProduto *li);
