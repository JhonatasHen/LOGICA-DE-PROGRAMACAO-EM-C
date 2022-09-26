#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char frase[100];
    int quantidade_linhas = 0, escrever_ou_ler, *resultado, sair = 0;

    do
    {
        system("cls");
        printf("[ 1 ] ESCREVER:\n[ 2 ] PARA LER:\n[ 3 ] SAIR:\n");
        scanf("%d", &escrever_ou_ler);
        system("cls");

        if (escrever_ou_ler == 1)
        {
            arq = fopen("Contagens de linhas.txt", "a");
            if (arq)
            {
                fflush(stdin);
                printf("Digite uma frase ou [ 0 ] para sair: ");
                fgets(frase, 50, stdin);
                quantidade_linhas = quantidade_linhas + 1;
                while (frase[0] != '0')
                {
                    fflush(stdin);
                    fputs(frase, arq);
                    printf("Digite uma frase ou [ 0 ] para sair: ");
                    fgets(frase, 50, stdin);
                    quantidade_linhas = quantidade_linhas + 1;
                }
                quantidade_linhas = quantidade_linhas - 1;
                printf("%d linhas escritas:\n", quantidade_linhas);
            }
        }
        else if (escrever_ou_ler == 2)
        {
            arq = fopen("Contagens de linhas.txt", "r");
            if (arq)
            {
                while (!feof(arq))
                {
                    resultado = fgets(frase, 50, arq);
                    if (resultado)
                    {
                        printf("%s", frase);
                    }
                }
            }
        }

        fclose(arq);
        printf("\n");
        if (escrever_ou_ler == 3)
        {
            sair++;
        }
        system("Pause");

    } while (sair <= 0);
    return 0;
}