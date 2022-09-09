#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    float n1;

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("\nNúmero digitado foi %f.\n", n1);

    return 0;
}