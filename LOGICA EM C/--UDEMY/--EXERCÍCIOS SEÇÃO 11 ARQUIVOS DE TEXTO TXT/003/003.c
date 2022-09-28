#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char texto[500];
    int escrever_ler = 0;
    do
    {
        printf("[ 1 ] ESCREVER:\n[ 2 ] LER:\n[ 3 ] SAIR");
        scanf("%d", &escrever_ler);
        fflush(stdin);
        if (escrever_ler == 1)
        {
            arq = fopen("Novo_texto.txt", "a");
            if (arq)
            {
                printf("Escreva um texto ou [ 0 ] para voltar: ");
                fgets(texto, 50, stdin);
                while (texto[0] != '0')
                {
                    fputs(texto, arq);
                    printf("Escreva um texto ou [ 0 ] para voltar: ");
                    fgets(texto, 50, stdin);
                }
            }
        }
        else if (escrever_ler == 2)
        {
            arq = fopen("Novo_texto.txt", "r");
            if (arq)
            {
                while (!feof(arq))
                {
                    printf("%s", texto);
                }
            }
        }

        fclose(arq);
    } while (escrever_ler <= 0);

    return 0;
}