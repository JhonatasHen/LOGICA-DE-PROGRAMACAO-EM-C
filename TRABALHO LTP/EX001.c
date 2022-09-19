#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade, cont = 0;
    float preco;
    do
    {
        system("cls");
        printf("--------------------------\n");
        printf("Registro de passageiros...\n");
        printf("--------------------------\n");
        printf("\n");
        printf("Passageiros de 0 a 11 anos tem 25%% de desconto\n");
        printf("Passageiros de 12 a 16 anos tem 10%% de desconto\n");
        printf("Passageiros de 17 a 22 anos tem 7%% de desconto\n");
        printf("Passageiros de 23 a 37 anos tem 2%% de desconto\n");
        printf("Passageiros de 38 a 45 anos tem 1%% de desconto\n");
        printf("Passageiros de 46 a 58 anos tem 5%% de desconto\n");
        printf("Passageiros acima de 58 anos tem 9%% de desconto\n");
        printf("\n");
        printf("Quantidade de passageiros: ");
        scanf("%d", &quantidade);
        printf("valor da passagem: R$");
        scanf("%f", &preco);
        system("cls");
        fflush(stdin);

        char nome[quantidade][50];
        int idade[quantidade], des[quantidade];
        float pagar[quantidade];
        for (int i = 0; i < quantidade; i++)
        {
            printf("nome dos passageiros: ");
            gets(nome[i]);
            printf("Idade do passageiro: ");
            scanf("%d", &idade[i]);
            if (idade[i] <= 11)
            {
                pagar[i] = preco - (preco * 0.25);
                des[i] = 25;
            }
            else if (idade[i] <= 16)
            {
                pagar[i] = preco - (preco * 0.10);
                des[i] = 10;
            }
            else if (idade[i] <= 22)
            {
                pagar[i] = preco - (preco * 0.07);
                des[i] = 7;
            }
            else if (idade[i] <= 37)
            {
                pagar[i] = preco - (preco * 0.02);
                des[i] = 2;
            }
            else if (idade[i] <= 45)
            {
                pagar[i] = preco - (preco * 0.01);
                des[i] = 1;
            }
            else if (idade[i] <= 58)
            {
                pagar[i] = preco - (preco * 0.05);
                des[i] = 5;
            }
            else
            {
                pagar[i] = preco - (preco * 0.09);
                des[i] = 9;
            }
            fflush(stdin);
            printf("\n");
        }
        system("cls");

        for (int i = 0; i < quantidade; i++)
        {
            printf("Passageiro: %s\n", nome[i]);
            printf("Tem: %d anos\n", idade[i]);
            printf("Valor da passagem é de R$%.2f passgeiro tem desconto de %d%%.\n", preco, des[i]);
            printf("Valor a pagar: R$%.2f\n", pagar[i]);
            printf("\n");
        }
        printf("Novo registro:\n[ 0 ] SIM\n[ 1 ] NãO\n");
        scanf("%d", &cont);
    } while (cont <= 0);

    return 0;
}