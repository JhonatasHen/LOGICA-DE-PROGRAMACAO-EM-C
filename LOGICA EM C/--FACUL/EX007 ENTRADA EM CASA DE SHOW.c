#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

	int escolha;
	float precoentrada, desconto, acrescido;

	printf("Preço da entrada sofre variações.\nSegunda, Terça e Quinta, ela oferece um desconto de 25%% preço normal de entrada\n");
	printf("\nNos dias de músicas ao vivo.\nO preço da entrada ainda é acrescido em 15%% em relação ao preço normal da entrada\n");
	printf("\nPreço da entrada normal: R$");
	scanf("%f", &precoentrada);
	printf("Escolha um dia:\n");
    printf("[ 1 ] Segunda-feira\n[ 2 ] Terça-feira\n[ 3 ] Quarta-feira\n[ 4 ] Quinta-feira\n[ 5 ] Sexta-feira\n[ 6 ] Sábado\n[ 7 ] Domingo\n");
	scanf ("%d", &escolha);

	if(escolha == 1 || escolha == 2 || escolha == 4 ){
		desconto = precoentrada - (precoentrada * 25 / 100);
		printf("Valor da entrada é R$%.2f", desconto);
	}
	else{
		acrescido = (precoentrada * 15 / 100) + precoentrada;
		printf("Valor da entrada é R$%.2f", acrescido);
	}
    return 0;
}
