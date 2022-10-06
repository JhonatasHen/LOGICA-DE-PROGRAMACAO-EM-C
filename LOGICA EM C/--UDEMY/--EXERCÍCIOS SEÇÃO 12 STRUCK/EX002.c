#include <stdio.h>
#include <locale.h>
#include <string.h>

struct st_pessoa
{
    char nome[100];
    char idade[3];
    char endereco[100];
} pessoa;

int main()
{
    setlocale(LC_ALL, "");
    FILE *arq;
    int cadastro = 0;

    arq = fopen("Contrato.doc", "w");

    if (arq)
    {

        printf("Qual seu nome: ");
        fgets(pessoa.nome, 100, stdin);

        printf("Qual sua idade: ");
        fgets(pessoa.idade, 3, stdin);

        fflush(stdin);
        printf("Qua seu endereço: ");
        fgets(pessoa.endereco, 100, stdin);

        fprintf(arq, "Seu nome é: %s\n", strtok(pessoa.nome, "\n"));
        fprintf(arq, "Idade: %s\n", pessoa.idade);
        fprintf(arq, "Enderoço: %s", pessoa.endereco);
    }

    fclose(arq);
    return 0;
}
