#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int ano,dia,mes;
    int ano2,dia2,mes2;

    printf("Primeira data dia/mês/ano : ");
    scanf("%d""%d""%d", &dia, &mes, &ano);
    system("cls");

    printf("Segunda data dia/mês/ano : ");
    scanf("%d""%d""%d", &dia2, &mes2, &ano2);
    system("cls");

    if (ano > ano2){
        printf("A data mais recente é %d/%d/%d.\n", dia, mes, ano);
    }
    else if(ano == ano2 && mes > mes2){
        printf("A data mais recente é %d/%d/%d.\n", dia, mes, ano);
    }
    else if(ano == ano2 && mes == mes2 && dia > dia2){
        printf("A data mais recente é %d/%d/%d.\n", dia, mes, ano);
    }
    else{
        printf("A data mais recente é %d/%d/%d.\n", dia2, mes2, ano2);
    }
    return 0;
}
