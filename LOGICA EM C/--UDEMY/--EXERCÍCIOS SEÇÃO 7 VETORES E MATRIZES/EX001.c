#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a[6] = {{1}, {0}, {5}, {-2}, {-5}, {7}};
    int soma = a[0] + a[1] + a[5];
    printf("%d\n", soma);
    printf("\n");
    a[4] = 100;
    int valor[6];
    for (int i = 0; i < 6; i++)
    {
        valor[i] = a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", valor[i]);
    }

    return 0;
}