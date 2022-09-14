#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int con;
    con = 1;
    float n1, raiz, potencia;
    do{
        printf("Didite um número: ");
        scanf("%f", &n1);

        if (n1 > 0)
        {
            raiz = sqrt(n1);
            potencia = pow(n1, 2);
            printf("A raiz quadrada de %.0f é %.2f eo quadrado dele é %.0f\n", n1, raiz, potencia);
            printf("\n");
        }
        else
        {
            printf("Digite um número valido....\n");
            printf("\n");
        }
        
    }while (con < 2);

    return 0;
}