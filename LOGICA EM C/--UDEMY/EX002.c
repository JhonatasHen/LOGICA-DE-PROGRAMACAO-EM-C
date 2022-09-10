#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int i = 1, n1 = 1, n2 = 1;

    for (size_t i = 1; i <= 100; i++)
    {
        printf("%d - ",i);
    }
    printf("\n");

    while (n1 <= 100)
    {
        printf("%d - ", n1);
        n1++;
    }
    printf("\n");

    do
    {
        printf("%d - ", n2);
        n2++;
    } while (n2 <= 100);
    

    return 0;
}