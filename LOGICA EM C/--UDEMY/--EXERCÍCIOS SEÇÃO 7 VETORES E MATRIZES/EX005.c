#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[10], cont = 0, par[cont];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            par[cont] = numeros[i];
            cont++;
        }
        else
        {
            continue;
        }
    }
    system("cls");
    printf("\n");
    printf("%d números são pares...", cont);
    printf("\n");
    for (int i = 0; i < cont; i++)
    {
        printf("O número %d é par.\n", par[i]);
    }

    return 0;
}