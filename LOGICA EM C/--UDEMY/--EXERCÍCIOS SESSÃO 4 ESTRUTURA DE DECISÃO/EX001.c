#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Segundo n�mero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O n�mero %d � maior que %d", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("O n�mero %d � maior que %d", n2, n1);
    }
    else
    {
        printf("Os dois n�meros s�o iguais...");
    }

    return 0;
}