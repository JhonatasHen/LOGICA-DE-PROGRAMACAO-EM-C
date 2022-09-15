#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int quantidade = 1, produto[quantidade];
    char nomeproduto[quantidade][50];


    do{
        system("cls");
        printf("Escolha uma opção:\n");
        printf("[1] cadastro de produtos:\n[2] Ver produtos\n[3] voltar\n ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls");
        switch (opcao)
        {
        case 1:
            printf("Nome do ptoduto: ");
            gets(nomeproduto[quantidade]);
            quantidade ++;
            break;
        case 2:
            
            for (int i = 1; i < quantidade; i++)
            {
                
                printf("%s\n", nomeproduto[i]);
            }
            system("pause");

        default:
            break;
        }

    }while(opcao < 3);

    return 0;
}