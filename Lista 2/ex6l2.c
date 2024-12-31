#include <stdio.h>

struct Aluno
{
    int matricula;
    char nome[50];
    double nota1;
    double nota2;
    double nota3;
};
int main()
{

    struct Aluno estu; // estudante
    int t;             // tamanho em byte
    t = sizeof(estu);
    printf("O tamanho, em byte, da estrutura e: %d\n", t);

    return 0;
}