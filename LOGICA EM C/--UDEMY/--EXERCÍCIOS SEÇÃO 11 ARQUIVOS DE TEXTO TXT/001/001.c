#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char itens[50], *resultado;
    int cadastro_leitura, sair = 0;
    do
    {
        system("cls");
        printf("[ 1 ] Cadastrar um item:\n[ 2 ] Leitura:\n");
        scanf("%d", &cadastro_leitura);
        system("cls");

        if (cadastro_leitura == 1)
        {
            arq = fopen("Itens.txt", "a");

            if (arq)
            {
                fflush(stdin);
                printf("Informe um item ou [ 0 ] para sair:");
                fgets(itens, 50, stdin);
                while (itens[0] != '0')
                {
                    fputs(itens, arq);
                    printf("Informe um item ou [ 0 ] para sair:");
                    fgets(itens, 50, stdin);
                }
            }
        }
        if (cadastro_leitura == 2)
        {
            arq = fopen("Itens.txt", "r");
            if (arq)
            {
                while (!feof(arq))
                {
                    resultado = fgets(itens, 50, arq);
                    if (resultado)
                    {
                        printf("%s", itens);
                    }
                }
            }
        }

        printf("\n\n");
        printf("[ 0 ] VOLTAR PARA O MENU:\n[ 1 ] SAIR:\n");
        scanf("%d", &sair);
        if (sair == 1)
        {
            sair++;
        }
        fclose(arq);
    } while (sair <= 0);

    return 0;
}