#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("\nNúmero digitado foi %d.\n", n1);

    return 0;
}
