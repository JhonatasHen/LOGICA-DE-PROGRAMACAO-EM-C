#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int i;

    for (size_t i = 0; i <= 100000; i = i + 1000)
    {
        printf("%d\n", i);
    }
    printf("\n---FIM---\n");

    return 0;
}