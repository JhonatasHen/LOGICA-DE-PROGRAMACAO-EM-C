#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float escolha, lula = 0, bolsonaro = 0, sair = 0;
    
    do
    {
        system("cls");
        fflush(stdin);
        printf("Lula:      %.0f votos\nBolsonaro: %.0f votos\n\n", lula, bolsonaro);
        printf("Escolha um candidato:\n");
        printf("[ 1 ] LULA\n[ 2 ] BOLSONARO\n[ 0 ] SAIR\n");
        scanf("%f", &escolha);

        if (escolha == 1)
        {
            lula++;
        }
        else if (escolha == 2)
        {
            bolsonaro++;
        }
        else if (escolha == 0)
        {
            sair++;
        }
    } while (sair <= 0);

    system("cls");
    int total_votos = bolsonaro + lula;
    float porcentagem_lula, porcentagem_bolsonaro;

    if (lula > bolsonaro)
    {
        porcentagem_lula = lula * 100 / total_votos;
        porcentagem_bolsonaro = bolsonaro * 100 / total_votos;
        printf("Lula ganhou com %.1f%% de votos\nTotal de votos: %.0f\n\n", porcentagem_lula, lula);
        printf("Bolsonaro ficou com %.1f%% de votos\nTotal de votos: %.0f\n\n", porcentagem_bolsonaro, bolsonaro);
        printf("Total de todos os votos %d votos.\n\n", total_votos);
        
    }
    else
    {
        porcentagem_bolsonaro = bolsonaro * 100 / total_votos;
        porcentagem_lula = lula * 100 / total_votos;
        printf("Bolsonaro ganhou com %.1f%% de votos\nTotal de votos: %.0f\n\n", porcentagem_bolsonaro, bolsonaro);
        printf("Lula ficou com %.1f%% de votos\nTotal de votos: %.0f\n\n", porcentagem_lula, lula);
        printf("Total de todos os votos %d votos.\n\n", total_votos);
    }
    
    system("Pause");
    return 0;
}