#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int ano,dia,mes;
    int ano2,dia2,mes2;

    printf("Primeira data dia/m�s/ano : ");
    scanf("%d""%d""%d", &dia, &mes, &ano);
    system("cls");

    printf("Segunda data dia/m�s/ano : ");
    scanf("%d""%d""%d", &dia2, &mes2, &ano2);
    system("cls");

    if (ano > ano2){
        printf("A data %d/%d/%d � maior\n", dia, mes, ano);
    }
    else if(ano == ano2 && mes > mes2){
        printf("A data %d/%d/%d � maior\n", dia, mes, ano);
    }
    else if(ano == ano2 && mes == mes2 && dia > dia2){
        printf("A data %d/%d/%d � maior\n", dia, mes, ano);
    }
    else{
        printf("A data %d/%d/%d � maior\n", dia2, mes2, ano2);
    }
    return 0;
}
