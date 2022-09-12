#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int horas[3];
    float salario[3];
    char nome [3][50];

    for (int i = 1; i < 3; i++)
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
    }
    for (int i = 0; i < 3; i++)
    {
        printf("nome", nome[i]);
    }
    
    return 0;
}