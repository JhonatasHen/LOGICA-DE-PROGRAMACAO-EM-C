#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct ts_funcionario
{
    char nome[100];
    int dia, mes, ano;
    char cargo[25];
    char jornada_de_trabalho[25];
}funcionario;

struct ts_cliente
{
    char nome[100];
    int telefone, ddd, numero_casa;
    char email[100];
    char endereco[100];
}cliente;

int main()
{
    setlocale(LC_ALL, "");

    FILE *cadastro_funcionario;
    FILE *cadastro_cliente;
    FILE *financeiro;

    char *resultado_nome;

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
    int  menu = 0;
    if(terminal_admin == 1)
    {
        int opcao;
        system("cls");
        do{
            system("cls");
            printf("ACESSO ADMINSTRADOR\n\n");
            printf("[1] Cadastrar novo funcionários\n[2] Cadastrar novo clientes\n[3] Financeiro\n[4] Relatórios\n");
            printf("[5] Funcionários cadastrados\n[6] Clientes cadastrados");
            printf("Escolha uma opção:\n");
            scanf("%d", &opcao);
            fflush(stdin);

            switch(opcao)
            {
                //CADASTRO DE FUNCIONÁRIO
                case 1:
                    system("cls");
                    cadastro_funcionario = fopen("Funcionarios.txt", "a");

                    if(cadastro_funcionario)
                    {
                        int novo_registro = 0;
                        while(novo_registro == 0)
                        {
                            system("cls");
                            printf("Nome do funcionário: \n");
                            fgets(funcionario.nome, 100, stdin);


                            printf("Data de nascimento:\n");
                            printf("Dia: ");
                            scanf("%d", &funcionario.dia);
                            fflush(stdin);
                            printf("Mês: ");
                            scanf("%d", &funcionario.mes);
                            fflush(stdin);
                            printf("ano: ");
                            scanf("%d", &funcionario.ano);
                            fflush(stdin);

                            printf("Cargo: ");
                            fgets(funcionario.cargo, 25, stdin);

                            printf("Jornada de trabalho: ");
                            fgets(funcionario.jornada_de_trabalho, 25, stdin);
                            printf("\n");

                            fprintf(cadastro_funcionario,"nome do funcionario: %s", funcionario.nome);
                            fprintf(cadastro_funcionario,"Data de nascimento: %d/%d/%d\n", funcionario.dia, funcionario.mes, funcionario.ano);
                            fprintf(cadastro_funcionario,"Cargo: %s", funcionario.cargo);
                            fprintf(cadastro_funcionario, "Jornada de trabalho: %s\n\n", funcionario.jornada_de_trabalho);

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
                    system("cls");
                    cadastro_cliente = fopen("Clientes.txt", "a");

                    if(cadastro_cliente);
                    {
                        int novo_cliente = 0;
                        while(novo_cliente == 0)
                        {
                            system("cls");
                            printf("Nome do cliente: ");
                            fgets(cliente.nome, 100, stdin);

                            printf("Telefone:\n");
                            printf("DDD: ");
                            scanf("%d", &cliente.ddd);
                            printf("Numero: ");
                            scanf("%d", &cliente.telefone);
                            fflush(stdin);

                            printf("E-mail: ");
                            fgets(cliente.email, 100, stdin);

                            printf("Endereço: ");
                            fgets(cliente.endereco, 100, stdin);
                            printf("Numero: ");
                            scanf("%d", &cliente.numero_casa);
                            fflush(stdin);

                            fprintf(cadastro_cliente,"Nome: %s", cliente.nome);
                            fprintf(cadastro_cliente,"Telefone: (%d)%d\n", cliente.ddd, cliente.telefone);
                            fprintf(cadastro_cliente,"E-mail: %s", cliente.email);
                            fprintf(cadastro_cliente,"Endereço: %s Nº%d\n\n", strtok (cliente.endereco, "\n"), cliente.numero_casa);



                            printf("Cadastrar novo cliente\n[0] SIM\n[1] NÃO\n");
                            scanf("%d", &novo_cliente);
                            getchar();
                            if(novo_cliente == 1)
                            {
                                fclose(cadastro_cliente);
                                novo_cliente ++;
                            }
                        }
                    }

                break;

                //FINANCEIRO
                case 3:
                    system("cls");
                    printf("FINANCEIRO");

                    break;


                case 4:

                    break;

                //FUNCIONÁRIOS CADASTRADOS
                case 5:
                    system("cls");
                    cadastro_funcionario = fopen("Funcionarios.txt", "r");
                    if(cadastro_funcionario)
                    {
                        while(!feof(cadastro_funcionario))
                        {
                            resultado_nome = fgets(funcionario.nome, 100, cadastro_funcionario);
                            if (resultado_nome)
                            {
                                printf("%s", resultado_nome);
                            }
                        }
                    }
                    system("Pause");
                    fclose(cadastro_funcionario);

                    break;

                //CLIENTES CADASTRADOS
                case 6:
                    system("cls");
                    cadastro_cliente = fopen("Clientes.txt", "r");
                    if(cadastro_cliente)
                    {
                        while(!feof(cadastro_cliente))
                        {
                            resultado_nome = fgets(cliente.nome, 100, cadastro_cliente);
                            if (resultado_nome)
                            {
                                printf("%s", resultado_nome);
                            }
                        }
                    }
                    system("Pause");
                    fclose(cadastro_cliente);
                    break;

                default:
                    printf("Opção invalida...\n");
                    system("pause");
                    system("cls");
            }
        }while(menu == 0);

    }
    //- - -TERMINAL ADMINISTRADOR- - -


    //- - -TERMINAL USUÁRIO- - -
    int menu_user = 0;
    if (ternminal_usuario == 1)
    {

        int opcao = 0;
        do{
            system("cls");
            printf("ACESSO USUÁRIO\n\n");
            printf("[1] Cadastrar novos clientes\n[2] Escrever Relatórios\n[3] Clientes cadastrados\n[4] Ver relatórios");
            printf("Escolha uma opção:\n");
            scanf("%d", &opcao);
            fflush(stdin);

            switch(opcao)
            {
                case 1:
                    system("cls");
                    cadastro_cliente = fopen("Clientes.txt", "a");

                    if(cadastro_cliente);
                    {
                        int novo_cliente = 0;
                        while(novo_cliente == 0)
                        {
                            system("cls");
                            printf("Nome do cliente: ");
                            fgets(cliente.nome, 100, stdin);

                            printf("Telefone:\n");
                            printf("DDD: ");
                            scanf("%d", &cliente.ddd);
                            printf("Numero: ");
                            scanf("%d", &cliente.telefone);
                            fflush(stdin);

                            printf("E-mail: ");
                            fgets(cliente.email, 100, stdin);

                            printf("Endereço: ");
                            fgets(cliente.endereco, 100, stdin);
                            printf("Numero: ");
                            scanf("%d", &cliente.numero_casa);
                            fflush(stdin);

                            fprintf(cadastro_cliente,"Nome: %s", cliente.nome);
                            fprintf(cadastro_cliente,"Telefone: (%d)%d\n", cliente.ddd, cliente.telefone);
                            fprintf(cadastro_cliente,"E-mail: %s", cliente.email);
                            fprintf(cadastro_cliente,"Endereço: %s Nº%d\n\n", strtok (cliente.endereco, "\n"), cliente.numero_casa);

                            printf("Cadastrar novo cliente\n[0] SIM\n[1] NÃO\n");
                            scanf("%d", &novo_cliente);
                            getchar();
                            if(novo_cliente == 1)
                            {
                                fclose(cadastro_cliente);
                                novo_cliente ++;
                            }
                        }

                    }

                break;
                //CLIENTES CADASTRADOS
                case 3:
                    system("cls");
                    cadastro_cliente = fopen("Clientes.txt", "r");
                    if(cadastro_cliente)
                    {
                        while(!feof(cadastro_cliente))
                        {
                            resultado_nome = fgets(cliente.nome, 100, cadastro_cliente);
                            if (resultado_nome)
                            {
                                printf("%s", resultado_nome);
                            }
                        }
                    }
                    system("Pause");
                    fclose(cadastro_cliente);
                break;

                default:
                    printf("Opção invalida...\n");
                    system("pause");
                    system("cls");
            }
        }while(menu_user == 0);
    }
    //- - -TERMINAL USUÁRIO- - -

    return 0;
}
