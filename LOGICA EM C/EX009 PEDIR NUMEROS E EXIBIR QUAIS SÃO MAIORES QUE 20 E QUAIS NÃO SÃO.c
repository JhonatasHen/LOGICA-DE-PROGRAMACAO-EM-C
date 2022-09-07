#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int contador, num;

    for(contador = 1; contador <= 10; contador ++){
        printf("Digite números: ");
        scanf("%d", &num);
        if(num >= 20){
            printf("Número maior que 20 - %d\n", num);
        }
        else{
            printf("Número menor que 20 - %d\n", num);
        }
    }


    return 0;
}
