#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float salario_funcionario, salario_familia, salario_liquido, fgts, inss;
    int dependentes, sair = 0;
    do
    {
        system("cls");
        fflush(stdin);
        printf("Nome do funcion�rio: ");
        gets(nome);
        printf("Sal�rio do funcion�rio: ");
        scanf("%f", &salario_funcionario);
        printf("n� dependentes do funcion�rio: ");
        scanf("%d", &dependentes);
        printf("\n");
        if (salario_funcionario <= 3636)
        {
            salario_familia = dependentes * (salario_funcionario * 0.05);
            fgts = salario_funcionario * 0.08;
            inss = salario_funcionario * 0.05;
            salario_liquido = (salario_funcionario + salario_familia) - (fgts + inss);
            printf("Funcion�rio: %s\nSalario funcion�rio: R$%.2f\nSal�rio fam�lia:     R$%.2f\nDesconto I.N.S.S.:   -R$%.2f\nDesconto F.G.T.S.:   -R$%.2f\nSal�rio l�quido:     R$%.2f", nome, salario_funcionario, salario_familia, inss, fgts, salario_liquido);
        }
        else if (salario_funcionario <= 7272)
        {
            salario_familia = dependentes * (salario_funcionario * 0.05);
            fgts = salario_funcionario * 0.085;
            inss = salario_funcionario * 0.06;
            salario_liquido = (salario_funcionario + salario_familia) - (fgts + inss);
            printf("Funcion�rio: %s\nSalario funcion�rio: R$%.2f\nSal�rio fam�lia:     R$%.2f\nDesconto I.N.S.S.:   -R$%.2f\nDesconto F.G.T.S.:   -R$%.2f\nSal�rio l�quido:     R$%.2f", nome, salario_funcionario, salario_familia, inss, fgts, salario_liquido);
        }

        else
        {
            salario_familia = dependentes * (salario_funcionario * 0.05);
            fgts = salario_funcionario * 0.09;
            inss = salario_funcionario * 0.07;
            salario_liquido = (salario_funcionario + salario_familia) - (fgts + inss);
            printf("Funcion�rio: %s\nSalario funcion�rio: R$%.2f\nSal�rio fam�lia:     R$%.2f\nDesconto I.N.S.S.:   -R$%.2f\nDesconto F.G.T.S.:   -R$%.2f\nSal�rio l�quido:     R$%.2f", nome, salario_funcionario, salario_familia, inss, fgts, salario_liquido);
        }

        printf("\n\nNovo funcion�rio:\n[0] SIM\n[1] N�O\n");
        scanf("%d", &sair);
        if (sair == 1)
        {
            sair++;
        }

    } while (sair <= 0);

    return 0;
}