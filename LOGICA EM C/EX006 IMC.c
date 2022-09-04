#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Cauculo de IMC.\n");

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite seu altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);


    printf("Seu IMC é %.1f\n", imc);

    if (imc < 18.5){
        printf("Você está abaixo do peso.");
    }
    else if (imc > 18.5 && imc <= 25){
        printf("Peso normal.");
    }
    else if (imc > 25  && imc <= 30){
        printf("Acima do peso.");
    }
    else{
        printf("Obeso");
    }
    return 0;
}
