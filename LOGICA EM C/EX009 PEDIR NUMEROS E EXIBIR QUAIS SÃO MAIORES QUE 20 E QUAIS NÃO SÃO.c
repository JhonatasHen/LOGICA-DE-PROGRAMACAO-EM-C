#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int contador, num;

    for(contador = 1; contador <= 10; contador ++){
        printf("Digite n�meros: ");
        scanf("%d", &num);
        if(num >= 20){
            printf("N�mero maior que 20 - %d\n", num);
        }
        else{
            printf("N�mero menor que 20 - %d\n", num);
        }
    }


    return 0;
}
