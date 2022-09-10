#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    int mul, con;
    float res;
    mul = 1;
    con = 1;
    while (mul <= 3)
    {
        res = con % 3;
        if (res == 0)
        {
            mul++;
            printf("%d é dividido por 3\n", con);
            con++;
        }
        else
        {
            con++;
            continue;
        }
    }
    printf("Fim do resultado...\n", mul);

        

    return 0;
}