#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, soma;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &n3);
    printf("\n");
    soma = n1 + n2 + n3;

    printf("Soma de %d + %d + %d = %d\n", n1, n2, n3, soma);


    return 0;
}