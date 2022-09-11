#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int numero[3];
    for (int i = 0; i < 3; i++)
    {
        printf("digite um número: ");
        scanf("%d", &numero[i]);
    }
    int maior = 0;
    for (int i = 0; i < 3; i++)
    {
        if (numero[i] > numero[1] && numero[i] > numero[2])
        {
            if (numero[1] < numero[2])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[1]);
            }
            else if (numero[2] < numero[1])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[2]);
            }
        } 

        else if (numero[i] > numero[0] && numero[i] > numero[2])
        {
            if (numero[0] < numero[2])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[0]);
            }
            else if (numero[2] < numero[0])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[2]);
            }
        }

        else if (numero[i] > numero[0] && numero[i] > numero[1])
        {
            if (numero[0] < numero[1])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[0]);
            }
            else if (numero[1] < numero[0])
            {
                printf("O número %d é o maior e o número %d é o menor.\n", numero[i], numero[1]);
            }
        }   
           
    }
    printf("\nFim\n");
    return 0;
}