#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int contador, num, maior20, menor20;
    contador = 1;
    maior20 = 0;
    menor20 = 0;
    for (contador = 1; contador <= 10; contador++){
        printf("Digite um número: ", num);
        scanf("%d", &num);
        system("cls");
        if(num > 20){
            maior20++;
        }
        else{
            menor20++;
        }
    }
    printf("%d São maiores que 20\n", maior20);
    printf("%d São menor que 20\n", menor20);
    return 0;
}
