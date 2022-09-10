#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int i, n1, soma = 0;

    for (size_t i = 1; i <= 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &n1);

        soma = soma + n1;
    }
    printf("Soma de todos os números é: %d", soma);

    return 0;
}