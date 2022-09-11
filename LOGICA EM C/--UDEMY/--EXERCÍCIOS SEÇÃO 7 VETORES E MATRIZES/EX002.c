#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }
    system("cls");
    printf("Os valor digitados são...\n");
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", valor[i]);
    }
    printf("\n");
    printf("%c", 3);
    printf("---FIIM---");
    printf("%c\n", 3);
    return 0;
}