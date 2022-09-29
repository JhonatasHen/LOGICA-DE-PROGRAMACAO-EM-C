#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    char texto[50];
    int escrever_ler = 0, sair = 0;

    do
    {
        printf("[ 1 ] ESCREVER:\n[ 2 ] LER:\n[ 3 ] SAIR\n");
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
                while ((texto[0] = getc(arq)) != EOF)
                {
                    printf("%c", texto);
                    
                        
                }
            }
        }
        else if (escrever_ler == 3)
        {
            sair++;
        }

        fclose(arq);
    } while (sair <= 0);

    return 0;
}