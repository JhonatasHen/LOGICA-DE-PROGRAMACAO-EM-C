#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
            if(n2 < n3){
                printf("O n�mero %d � o maior e %d � o menor.", n1, n2);
            }
            else if (n3 < n2){
                printf("O n�mero %d � o maior e %d � o menor.", n1, n3);
            }
            else if (n3 == n2){
                printf("O n�mero %d � o maior eo %d e %d s�o iguais.", n1, n2, n3);
            }

    }
    else if(n1 == n2 && n3 < n1){
        printf("Os n�meros %d e %d s�o iguais e %d � o menor", n1, n2, n3);
    }
    else if(n1 == n3 && n2 < n1){
        printf("Os n�meros %d e %d s�o iguais e %d � o menor", n1, n3, n2);
    }
    else if(n2 > n1 && n2 > n3){
            if(n1 < n3){
                printf("O n�mero %d � o maior e %d � o menor.", n2, n1);
            }
            else if (n3 < n1){
                printf("O n�mero %d � o maior e %d � o menor.", n2, n3);
            }
            else if (n3 == n1){
                printf("O n�mero %d � o maior eo %d e %d s�o iguais.", n2, n1, n3);
            }
    }
    else if(n2 == n1 && n3 < n2){
        printf("Os n�meros %d e %d s�o iguais e %d � o menor", n2, n1, n3);
    }
    else if(n2 == n3 && n1 < n2){
        printf("Os n�meros %d e %d s�o iguais e %d � o menor", n2, n3, n1);
    }
    else if(n3 > n1 && n3 > n2){
            if(n1 < n2){
                printf("O n�mero %d � o maior e %d � o menor.", n3, n1);
            }
            else if (n2 < n1){
                printf("O n�mero %d � o maior e %d � o menor.", n3, n2);
            }
            else if (n2 == n1){
                printf("O n�mero %d � o maior eo %d e %d s�o iguais.", n3, n1, n2);
            }
            else if (n3 == n2 && n1 < n3){
                printf("Os n�meros %d e %d s�o iguais e %d � o menor", n3, n2, n1);
            }
             else if (n3 == n1 && n2 < n3){
                printf("Os n�meros %d e %d s�o iguais e %d � o menor", n3, n1, n2);
            }
    }
    else{
        printf("Os n�meros %d, %d e %d s�o iguais.", n1, n2, n3);
    }
    return 0;
}
