#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);

    printf("\nN�mero digitado foi %d.\n", n1);

    return 0;
}
