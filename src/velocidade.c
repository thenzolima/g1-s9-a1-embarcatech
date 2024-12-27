#include <stdio.h>
#include "velocidade.h"

void conversorVelocidade()
{
    int op;
    double valor, resultado;

    printf("\n------- Conversor de Velocidade (km/h, m/s, mph) -------\n");
    printf("1. Quilômetros por hora (km/h) para Metros por segundo (m/s)\n");
    printf("2. Metros por segundo (m/s) para Quilômetros por hora (km/h)\n");
    printf("3. Quilômetros por hora (km/h) para Milhas por hora (mph)\n");
    printf("4. Milhas por hora (mph) para Quilômetros por hora (km/h)\n");
    printf("5. Metros por segundo (m/s) para Milhas por hora (mph)\n");
    printf("6. Milhas por hora (mph) para Metros por segundo (m/s)\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("\nDigite o valor em km/h: ");
        scanf("%lf", &valor);
        resultado = valor / 3.6;
        printf("\nO valor em m/s é: %.2f\n", resultado);
        break;
    case 2:
        printf("\nDigite o valor em m/s: ");
        scanf("%lf", &valor);
        resultado = valor * 3.6;
        printf("\nO valor em km/h é: %.2f\n", resultado);
        break;
    case 3:
        printf("\nDigite o valor em km/h: ");
        scanf("%lf", &valor);
        resultado = valor / 1.609;
        printf("\nO valor em mph é: %.2f\n", resultado);
        break;
    case 4:
        printf("\nDigite o valor em mph: ");
        scanf("%lf", &valor);
        resultado = valor * 1.609;
        printf("\nO valor em km/h é: %.2f\n", resultado);
        break;
    case 5:
        printf("\nDigite o valor em m/s: ");
        scanf("%lf", &valor);
        resultado = valor * 2.237;
        printf("\nO valor em mph é: %.2f\n", resultado);
        break;
    case 6:
        printf("\nDigite o valor em mph: ");
        scanf("%lf", &valor);
        resultado = valor / 2.237;
        printf("\nO valor em m/s é: %.2f\n", resultado);
        break;
    default:
        printf("\nOpcao invalida!\n");
        break;
    }
}