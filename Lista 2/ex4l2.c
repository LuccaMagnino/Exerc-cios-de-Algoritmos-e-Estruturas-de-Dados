#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char cargo[50];
    double salario_base;
    char CPF[15];
    char departamento[50];
} Func; // Funcionario

int main()
{
    int n; // Numero de funcionarios
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &n);

    Func funcionarios[n];

    for (int i = 0; i < n; i++)
    {
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        printf("Cargo: ");
        fgets(funcionarios[i].cargo, sizeof(funcionarios[i].cargo), stdin);
        printf("Salario base: ");
        scanf("%lf", &funcionarios[i].salario_base);
        printf("CPF: ");
        fgets(funcionarios[i].CPF, sizeof(funcionarios[i].CPF), stdin);
        printf("Departamento: ");
        fgets(funcionarios[i].departamento, sizeof(funcionarios[i].departamento),
              stdin);
    }

    double salario_total = 0;

    for (int i = 0; i < n; i++)
    {
        float adicional = 0;
        if (strcmp(funcionarios[i].cargo, "Assistente") == 0)
        {
            adicional = 0.05;
        }
        else if (strcmp(funcionarios[i].cargo, "Supervisor") == 0)
        {
            adicional = 0.10;
        }
        else if (strcmp(funcionarios[i].cargo, "Gerente") == 0)
        {
            adicional = 0.15;
        }
        else
        {
            adicional = 0.02;
        }
        salario_total += funcionarios[i].salario_base * (1 + adicional);
    }

    float salario_medio = salario_total / n;

    printf("\nSalario medio dos funcionarios: %.2lf\n", salario_medio);

    return 0;
}