#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

	int escolha;
	float precoentrada, desconto, acrescido;

	printf("Pre�o da entrada sofre varia��es.\nSegunda, Ter�a e Quinta, ela oferece um desconto de 25%% pre�o normal de entrada\n");
	printf("\nNos dias de m�sicas ao vivo.\nO pre�o da entrada ainda � acrescido em 15%% em rela��o ao pre�o normal da entrada\n");
	printf("\nPre�o da entrada normal: R$");
	scanf("%f", &precoentrada);
	printf("Escolha um dia:\n");
    printf("[ 1 ] Segunda-feira\n[ 2 ] Ter�a-feira\n[ 3 ] Quarta-feira\n[ 4 ] Quinta-feira\n[ 5 ] Sexta-feira\n[ 6 ] S�bado\n[ 7 ] Domingo\n");
	scanf ("%d", &escolha);

	if(escolha == 1 || escolha == 2 || escolha == 4 ){
		desconto = precoentrada - (precoentrada * 25 / 100);
		printf("Valor da entrada � R$%.2f", desconto);
	}
	else{
		acrescido = (precoentrada * 15 / 100) + precoentrada;
		printf("Valor da entrada � R$%.2f", acrescido);
	}
    return 0;
}
