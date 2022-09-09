#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O número %d é maior que %d", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("O número %d é maior que %d", n2, n1);
    }
    else
    {
        printf("Os dois números são iguais...");
    }

    return 0;
}