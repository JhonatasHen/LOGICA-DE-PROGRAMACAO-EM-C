#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, num, soma = 0;

    for (size_t i = 1; i <= 7; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("%d", soma);

    return 0;
}