#include <stdio.h>
#include "massa.h"

void conversorMassa()
{
    char operacao;
    float numero;

    printf("Escolha uma opcao para conversao: \n\n");
    printf("Digite [1] para conversao de tonelada para quilo\n");
    printf("Digite [2] para conversao de tonelada para grama\n");
    printf("Digite [3] para conversao de quilo para tonelada\n");
    printf("Digite [4] para conversao de quilo para grama\n");
    printf("Digite [5] para conversao de grama para quilo\n");
    printf("Digite [6] para conversao de grama para tonelada\n");

    // Corrigindo o problema de leitura
    printf("Digite a opcao desejada: ");
    scanf(" %c", &operacao); // Espaço antes de %c para consumir resíduos do buffer

    printf("Digite um valor para a conversao: ");
    if (scanf("%f", &numero) != 1) {
        printf("Entrada invalida. Por favor, insira um número.\n");
        return;
    }

    switch (operacao)
    {
    case '1':
        printf("%.2f toneladas = %.2f quilos\n", numero, numero * 1000);
        break;
    case '2':
        printf("%.2f toneladas = %.2f gramas\n", numero, numero * 1000000);
        break;
    case '3':
        printf("%.2f quilos = %.2f toneladas\n", numero, numero / 1000);
        break;
    case '4':
        printf("%.2f quilos = %.2f gramas\n", numero, numero * 1000);
        break;
    case '5':
        printf("%.2f gramas = %.2f quilos\n", numero, numero / 1000);
        break;
    case '6':
        printf("%.2f gramas = %.2f toneladas\n", numero, numero / 1000000);
        break;
    default:
        printf("Voce digitou uma operacao invalida.\n");
    }
}

