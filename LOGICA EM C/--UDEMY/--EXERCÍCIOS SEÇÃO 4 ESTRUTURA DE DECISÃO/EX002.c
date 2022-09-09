#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, quadrado, raiz;

    printf("Digite um número: ");
    scanf("%f", &n1);

    if (n1 > 0)
    {
        raiz = sqrt(n1);
        printf("Raiz quadrada de %.2f é %.2f", n1, raiz);
    }
    else
    {
        quadrado = n1 * n1;
        printf("O número %.2f a o quadrado é %.2f", n1, quadrado);
    }

    return 0;
}