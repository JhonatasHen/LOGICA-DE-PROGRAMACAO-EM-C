#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[10], cont = 0, par[cont];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um n�mero: ");
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
    printf("%d n�meros s�o pares...", cont);
    printf("\n");
    for (int i = 0; i < cont; i++)
    {
        printf("O n�mero %d � par.\n", par[i]);
    }

    return 0;
}