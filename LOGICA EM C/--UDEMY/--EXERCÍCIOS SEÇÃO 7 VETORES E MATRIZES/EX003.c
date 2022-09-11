#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float numero[10], quadrado[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &numero[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        quadrado[i] = numero[i] * numero[i];
    }
    printf("\n");
    printf("Valores dos números...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", numero[i]);
    }
    printf("\n");
    printf("Valores das potências...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", quadrado[i]);
    }
    printf("\n");

    return 0;
}