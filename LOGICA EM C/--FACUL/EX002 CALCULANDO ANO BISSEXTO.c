#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano;

    printf("Escolha um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %d � bissexto", ano);
    }
    else{
        printf("O ano %d n�o � bissexto", ano);
    }
    return 0;
}
