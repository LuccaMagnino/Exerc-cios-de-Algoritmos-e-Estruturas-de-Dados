#include <stdio.h>
#include <string.h>

struct endereco
{
    char logradouro[100];
    int numero;
    char bairro[100];
    char complemento[100];
    long int cep;
    char cidade[100];
    char estado[100];
};

struct pessoa
{
    char nome[100];
    int idade;
    struct endereco end;
};

int main()
{
    struct pessoa p[100];
    int n; // numero de pessoas

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", p[i].nome); // Ou use fgets(p[i].nome, 100, stdin) para ler com espaços

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &p[i].idade);
        if (p[i].idade > 120 || p[i].idade < 0)
        {
            printf("Idade nao aceita, encerrando!");
            return 1;
        }

        printf("Agora, sobre o endereco da pessoa, digite o logradouro, o numero, o bairro, o complemento, o cep, a cidade e o estado, respectivamente e separados por um espaco:\n");

        scanf("%s %d %s %s %ld %s %s", p[i].end.logradouro, &p[i].end.numero, p[i].end.bairro, p[i].end.complemento, &p[i].end.cep, p[i].end.cidade, p[i].end.estado);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nSegue as informacoes da pessoa %d:\n Nome: %s\n Idade: %d\n Endereco: %s, %d, %s, %s, %ld, %s, %s\n",
               i + 1, p[i].nome, p[i].idade, p[i].end.logradouro, p[i].end.numero, p[i].end.bairro, p[i].end.complemento, p[i].end.cep, p[i].end.cidade, p[i].end.estado);
    }

    return 0;
}
