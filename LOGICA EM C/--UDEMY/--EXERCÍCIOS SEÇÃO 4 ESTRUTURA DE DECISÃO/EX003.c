#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int con;
    con = 1;
    float n1, raiz, potencia;
    do{
        printf("Didite um n�mero: ");
        scanf("%f", &n1);

        if (n1 > 0)
        {
            raiz = sqrt(n1);
            potencia = pow(n1, 2);
            printf("A raiz quadrada de %.0f � %.2f eo quadrado dele � %.0f\n", n1, raiz, potencia);
            printf("\n");
        }
        else
        {
            printf("Digite um n�mero valido....\n");
            printf("\n");
        }
        
    }while (con < 2);

    return 0;
}