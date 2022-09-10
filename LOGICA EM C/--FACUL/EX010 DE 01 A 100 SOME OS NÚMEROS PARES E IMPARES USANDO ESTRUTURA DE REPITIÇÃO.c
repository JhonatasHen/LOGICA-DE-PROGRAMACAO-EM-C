#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador, somapar, somaimpar;
    contador = 1;
    somapar = 0;
    somaimpar = 0;

    for (contador = 1; contador <= 100; contador++)
    {
        if (contador % 2 == 0)
        {
            somapar = somaimpar + contador;
        }
        else
        {
            somaimpar = somaimpar + contador;
        }
    }

    printf("\nSoma dos números par = %d\n", somapar);
    printf("Soma dos números impar =  %d\n", somaimpar);
    return 0;
}
