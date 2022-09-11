#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int vet[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    printf("\n");
    int valor[2], soma;
    for (int i = 0; i < 2; i++)
    {
        printf("Digite um número de 0 a 7: ");
        scanf("%d", &valor[i]);
    }
    printf("\n");
    soma = vet[valor[0]] + vet[valor[1]]; 
    printf("soma dos vetores %d + %d = %d\n",vet[valor[0]],vet[valor[1]], soma);

    return 0;
}