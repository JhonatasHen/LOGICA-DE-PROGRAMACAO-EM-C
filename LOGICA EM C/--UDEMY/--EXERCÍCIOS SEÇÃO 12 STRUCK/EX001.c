#include <stdio.h>
#include <locale.h>
#include <string.h>

struct st_horario
{
    char hora[10];
    char minuto[10];
    char segundo[10];

} horario;

struct st_data
{
    char dia[25];
    char mes[25];
    char ano[25];
}data;


int main()
{

    printf("======== AGENDA DE COMPROMISSO ========\n\n");

    //horario
    printf("Informe as horas: ");
    fgets(horario.hora, 10, stdin);

    printf("Informe os minutos: ");
    fgets(horario.minuto, 10, stdin);

    printf("Informe os segundos: ");
    fgets(horario.segundo, 10, stdin);
    printf("\n");
    //horario

    //data
    printf("Informe o dia: ");
    fgets(data.dia, 25, stdin);

    printf("Informe o mês: ");
    fgets(data.mes, 25, stdin);

    printf("Informe o ano: ");
    fgets(data.ano, 25, stdin);
    printf("\n");
    //data

    //compromisso
    char compromisso[500];
    printf("Informe seu compromisso: ");
    fgets(compromisso, 500, stdin);
    printf("\n");
    //compromisso

    printf("======== COMPROMISSO AGENDADO ========\n\n");
    printf("Seu compromisso: %s\nEsta marcado para: %s/%s/%s\nAs %s:%s:%s", strtok (compromisso, "\n"), strtok (data.dia, "\n"), strtok( data.mes, "\n"), strtok (data.ano, "\n"), strtok (horario.hora, "\n"), strtok (horario.minuto, "\n"), strtok (horario.segundo, "\n"));

    return 0;
}