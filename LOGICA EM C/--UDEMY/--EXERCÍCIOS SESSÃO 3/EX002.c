#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    float n1;

    printf("Digite um n�mero: ");
    scanf("%f", &n1);

    printf("\nN�mero digitado foi %f.\n", n1);

    return 0;
}