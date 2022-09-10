#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float base, altura, area;

    printf("Base: ");
    scanf("%f", &base);

    fflush (stdin);
    printf("Altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A base de %.2f e altura de %.2f tem a área de %.2f.", base, altura, area);

    return 0;
}
