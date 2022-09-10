#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, horas;
    float salario;
    char nome [50];

    for (size_t i = 1; i <= 5; i++)
    {
        fflush(stdin);
        printf("Nome do funcionário: ");
        gets(nome);
        printf("Salário: R$");
        scanf("%f", &salario);
        printf("Horas trabalhadas: ");
        scanf("%d", &horas);
        printf("\n");
        //system("cls");

        if (horas <= 2)
        {
            printf("%s, tarabalhou %dhrs\nRecebe R$%.2f\n", nome, horas, salario);
            printf("\n");
        }
        else if (horas > 2 && horas <= 4)
        {
            salario = salario * 0.20 + salario;
            printf("%s, tarabalhou %dhrs tera 20%% acréscimo\nRecebe R$%.2f\n", nome, horas, salario);
            printf("\n");
        }
        else
        {
            salario = salario * 0.30 + salario;
            printf("%s, tarabalhou %dhrs tera 30%% de acréscimo\nRecebe R$%.2f\n", nome, horas, salario);
            printf("\n");
        }
        
        
    }
    
    return 0;
}