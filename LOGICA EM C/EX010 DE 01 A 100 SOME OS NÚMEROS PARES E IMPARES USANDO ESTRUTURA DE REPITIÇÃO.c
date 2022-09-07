#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador, somapar, somaimpar;
    contador = 1;

    for (contador = 1; contador <= 100; contador++)
    {
        if (contador % 2 == 0)
        {
            /// printf("%d\n", contador);
            somapar = contador + contador;
        }
        else
        {
            // printf("%d\n", contador);
            somaimpar = contador + contador;
        }
    }

    printf("\nSoma dos números par = %d\n", somapar);
    printf("Soma dos números impar =  %d\n", somaimpar);
    return 0;
}
