#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct ts_funcionario
{
    char nome[100];
    int dia, mes, ano;
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

        printf("[1] Cadastros de funcio�rios\n[2] Cadastros de clientes\n[3] Pagamento");
        printf("Escolha uma op��o:\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
            //CADASTRO DE FUNCION�RIO
            case 1:

                cadastro_funcionario = fopen("Funcionarios.txt", "a");

                if(cadastro_funcionario)
                {
                    int novo_registro = 0;
                    while(novo_registro == 0)
                    {
                        system("cls");
                        printf("Nome do funcion�rio\n");
                        fgets(funcionario.nome, 100, stdin);
                        fprintf(cadastro_funcionario,"nome do funcionario: %s", funcionario.nome);

                        printf("Data de nascimento:\n");
                        printf("Dia: ");
                        scanf("%d", &funcionario.dia);
                        fflush(stdin);
                        printf("M�s: ");
                        scanf("%d", &funcionario.mes);
                        fflush(stdin);
                        printf("ano: ");
                        scanf("%d", &funcionario.ano);
                        fflush(stdin);
                        fprintf(cadastro_funcionario,"Data de nascimento: %d/%d/%d\n", funcionario.dia, funcionario.mes, funcionario.ano);

                        fprintf(cadastro_funcionario,"\n");

                        printf("Registrar novo funcion�rio\n[0] SIM\n[1] N�O\n");
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
                printf("Op��o invalida...\n");
                system("pause");
                system("cls");
        }


    }
    //- - -TERMINAL ADMINISTRADOR- - -


    //- - -TERMINAL USU�RIO- - -
    else if (ternminal_usuario == 1)
    {
        system("cls");
        printf("ACESSO USU�RIO\n\n");
    }
    //- - -TERMINAL USU�RIO- - -



    return 0;
}
