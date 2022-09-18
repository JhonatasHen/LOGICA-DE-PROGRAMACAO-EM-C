#include <stdio.h>
#include <stdlib.h>
#include "dobro.h"
int main()
{
    int n1, n2, res;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n1);

    printf("Digite um valor inteiro: ");
    scanf("%d", &n2);


    res = dobro(int n1, int n2);
    printf("%d", res);

    return 0;
}
