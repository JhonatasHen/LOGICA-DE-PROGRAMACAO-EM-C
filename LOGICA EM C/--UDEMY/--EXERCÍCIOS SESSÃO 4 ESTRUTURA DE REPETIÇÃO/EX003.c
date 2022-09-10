#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int n1 = 10;

    while (n1 >= 0)
    {
        printf("%d\n", n1);
        n1--;
    }
    printf("\n---FIIM---\n");

    return 0;
}