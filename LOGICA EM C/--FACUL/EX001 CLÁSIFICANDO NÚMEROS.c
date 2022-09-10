#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
            if(n2 < n3){
                printf("O número %d é o maior e %d é o menor.", n1, n2);
            }
            else if (n3 < n2){
                printf("O número %d é o maior e %d é o menor.", n1, n3);
            }
            else if (n3 == n2){
                printf("O número %d é o maior eo %d e %d são iguais.", n1, n2, n3);
            }

    }
    else if(n1 == n2 && n3 < n1){
        printf("Os números %d e %d são iguais e %d é o menor", n1, n2, n3);
    }
    else if(n1 == n3 && n2 < n1){
        printf("Os números %d e %d são iguais e %d é o menor", n1, n3, n2);
    }
    else if(n2 > n1 && n2 > n3){
            if(n1 < n3){
                printf("O número %d é o maior e %d é o menor.", n2, n1);
            }
            else if (n3 < n1){
                printf("O número %d é o maior e %d é o menor.", n2, n3);
            }
            else if (n3 == n1){
                printf("O número %d é o maior eo %d e %d são iguais.", n2, n1, n3);
            }
    }
    else if(n2 == n1 && n3 < n2){
        printf("Os números %d e %d são iguais e %d é o menor", n2, n1, n3);
    }
    else if(n2 == n3 && n1 < n2){
        printf("Os números %d e %d são iguais e %d é o menor", n2, n3, n1);
    }
    else if(n3 > n1 && n3 > n2){
            if(n1 < n2){
                printf("O número %d é o maior e %d é o menor.", n3, n1);
            }
            else if (n2 < n1){
                printf("O número %d é o maior e %d é o menor.", n3, n2);
            }
            else if (n2 == n1){
                printf("O número %d é o maior eo %d e %d são iguais.", n3, n1, n2);
            }
            else if (n3 == n2 && n1 < n3){
                printf("Os números %d e %d são iguais e %d é o menor", n3, n2, n1);
            }
             else if (n3 == n1 && n2 < n3){
                printf("Os números %d e %d são iguais e %d é o menor", n3, n1, n2);
            }
    }
    else{
        printf("Os números %d, %d e %d são iguais.", n1, n2, n3);
    }
    return 0;
}
