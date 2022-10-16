#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct ts_funcionario
{
    char nome_funcionario[100];
    char ano_nascimento[25];
    char nacionalidade[25];
    char cargo[25];
    char jornada_de_trabalho[25];
}funcionario;


int main()
{
    setlocale(LC_ALL, "");
    FILE *cadastro_funcionario;

    //- - -LOGIN- - -
    char entrar_admin_login[20] = {"admin"}, entrar_admin_senha[20] = {"admin"};
    char entrar_usuario_login[20] = {"usuario"}, entrar_usuario_senha [20] = {"usuario"};
    char login[20], senha[20];
    int login_admin, senha_admin, login_usuario, senha_usuario, fim_login = 0;
    int terminal_admin = 0, ternminal_usuario = 0;

    do
    {
        system("cls");
        printf("Login: ");
        gets(login);
        printf("Senha: ");
        gets(senha);

        login_admin = strcmp(login, entrar_admin_login);
        senha_admin = strcmp(senha, entrar_admin_senha);

        login_usuario = strcmp(login, entrar_usuario_login);
        senha_usuario = strcmp(senha, entrar_usuario_senha);

        if(login_admin == 0 && senha_admin == 0)
        {
            fim_login ++;
            terminal_admin ++;
        }

        else if (login_usuario == 0 && senha_usuario == 0)
        {
            fim_login ++;
            ternminal_usuario ++;
        }

        else
        {
            printf("SENHA OU LOGIN INCORRETO\n");
            system("Pause");
        }

    }while(fim_login == 0);
    //- - -LOGIN- - -


    //- - -TERMINAL ADMINISTRADOR- - -

    if(terminal_admin == 1)
    {
        int opcao;
        system("cls");
        printf("ACESSO ADMINSTRADOR\n\n");

        printf("[1] Cadastros de funcioários\n[2] Cadastros de clientes\n[3] Pagamento");
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
            //CADASTRO DE FUNCIONÁRIO
            case 1:

                cadastro_funcionario = fopen("Funcionarios.txt", "a");

                if(cadastro_funcionario)
                {
                    int novo_registro = 0;
                    while(novo_registro == 0)
                    {
                        system("cls");
                        printf("Nome do funcionário\nAperte 0 para sair:\n");
                        fgets(funcionario.nome_funcionario, 100, stdin);
                        fputs(funcionario.nome_funcionario, cadastro_funcionario);
                        printf("%s", funcionario.nome_funcionario);
                        printf("Registrar novo funcionário\n[0] SIM\n[1] NÃO\n");
                        scanf("%d", &novo_registro);
                        getchar();
                        if(novo_registro == 1)
                        {
                            fclose(cadastro_funcionario);
                            novo_registro ++;
                        }
                    }

                }

                break;

            //CADASTRO DE CLIENTE
            case 2:

                break;

            //PAGAMENTO
            case 3:

                break;

            default:
                printf("Opção invalida...\n");
                system("pause");
                system("cls");
        }


    }
    //- - -TERMINAL ADMINISTRADOR- - -


    //- - -TERMINAL USUÁRIO- - -
    else if (ternminal_usuario == 1)
    {
        system("cls");
        printf("ACESSO USUÁRIO\n\n");
    }
    //- - -TERMINAL USUÁRIO- - -



    return 0;
}
