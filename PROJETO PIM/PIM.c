#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char cadastro_login[50], cadastro_senha[50];
    char login[50], senha[50];
    int entrar_login, entrar_senha;

    printf("===== CADASTRO DE USUÁRIO =====\n\n");
    printf("Cadastro de Login: ");
    fgets(cadastro_login, 50, stdin);
    printf("Cadastro senha: ");
    fgets(cadastro_senha, 50, stdin);
    system("cls");

    printf("===== LOGIN =====\n\n");
    printf("Login: ");
    fgets(login, 50, stdin);
    printf("Senha: ");
    fgets(senha, 50, stdin);

    entrar_login = strcmp(login, cadastro_login);
    entrar_senha = strcmp(senha, cadastro_senha);

    if (entrar_login == 0 && entrar_senha == 0)
    {
        printf("Entrou");
    }
    else
    {
        printf("Login ou senha incorreto.");
    }

    return 0;
}