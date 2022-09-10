#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int i, n1, soma = 0, media;
        for (size_t i = 1; i <= 10; i++)
        {
            printf("Digite um valor: ");
            scanf("%d", &n1);

            if (n1 > 0);
            {
                soma = soma + n1;
                media = soma / 10;   
            }   
        }

    printf("A média é: %d", media);

    return 0;
}
