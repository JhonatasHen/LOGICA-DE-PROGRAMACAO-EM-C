#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Portuguese");
    float vendas, pra = 0, pre = 0, bra = 0, ver = 0;
    float porpra = 0, porpre = 0, porbra = 0, porver = 0;
    int distri = 1000;
    for (int i = 0 - 1; i < distri;)
    {   
        int quantidade = 0;
        system("cls");
        printf("Distribua os carros vendidos em suas cores.\nFalta distribuir: %d\n\n", distri);
        printf("[1] Prata vendas = %.0f. Representa %.1f%% dos carros\n[2] Preto vendas = %.0f. Representa %.1f%% dos carros\n[3] Branco vendas = %.0f. Representa %.1f%% dos carros\n[4] Vermelho vendas = %.0f. Representa %.1f%% dos carros\n\n", pra, porpra, pre, porpre, bra, porbra, ver, porver);   
        printf("Vendas de carro: ");
        scanf("%f", &vendas);

        if (vendas == 1)
        {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            pra = pra + quantidade;
            porpra = pra * 100 / 1000;
            distri = distri - quantidade;
        }
        else if (vendas == 2)
        {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            pre = pre + quantidade;
            porpre = pre * 100 / 1000;
            distri =  distri - quantidade;
        }
        else if (vendas == 3)
        {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            bra = bra + quantidade;
            porbra = bra * 100 / 1000;
            distri = distri - quantidade;
        }
        else if (vendas == 4)
        {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
            ver = ver + quantidade;
            porver = ver * 100 / 1000;
            distri = distri - quantidade;
        }
    }
    
    system("pause");
    return 0;
}