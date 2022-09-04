#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (void){
    setlocale(LC_ALL, "Portuguese");

    float rendamensal, saude, educacao, alimentacao, vestuario, lazer, outros;

    printf("Renda mensal: ");
    scanf("%f", &rendamensal);

    printf("Sua distribui��o de rendas:\n");

    saude = rendamensal * 10 / 100;
    printf("Para sa�de: R$%.2f\n", saude);

    educacao = rendamensal * 25 / 100;
    printf("Para a educa��o: R$%.2f\n", educacao);

    alimentacao = rendamensal * 30 / 100;
    printf("Para a alimenta��o: R$%.2f\n", alimentacao);

    vestuario = rendamensal * 10 / 100;
    printf("Para a vestu�rio: R$%.2f\n", vestuario);

    lazer = rendamensal * 5 / 100;
    printf("Para a lazer: R$%.2f\n", lazer);

    outros = rendamensal * 20 / 100;
    printf("Para a outros: R$%.2f\n", outros);

    return 0;
}
