#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float salariofixo, totalvendas, salariototal, comissao;

    //NOME DO VENDEDOR
    printf("Nome do vendedor: ");
    gets(nome);
    //NOME DO VENDEDOR

    printf("Salario: R$");
    scanf("%f", &salariofixo);
    printf("Vendas efetuadas no m�s: R$");
    scanf("%f", &totalvendas);

    comissao = totalvendas * 15 / 100;
    salariototal = salariofixo + comissao;

    printf("O vendedor %s recebe R$%.2f\n", nome, salariofixo);
    printf("Total de vendas no m�s foi R$%.2f\n",totalvendas);
    printf("Sua comiss�o � de R$%.2f\n", comissao);
    printf("Seu salario total � de R$%.2f\n", salariototal);

    return 0;
}
