#include <stdio.h>
#include "area.h"

void conversorArea()
{
    int op;
    float valor, resultado;

    printf("\n------- Conversor de Unidades de Área -------\n");
    printf("1. Metros quadrados (m²) para Centímetros quadrados (cm²)\n");
    printf("2. Centímetros quadrados (cm²) para Metros quadrados (m²)\n");
    printf("3. Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);

    if (op != 3) {
        printf("\nDigite o valor a ser convertido: ");
        scanf("%f", &valor);
    }

    switch (op)
    {
        case 1:
            resultado = valor * 10000;
            printf("\n%.2f metros quadrados = %.2f centímetros quadrados\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 10000;
            printf("\n%.2f centímetros quadrados = %.2f metros quadrados\n", valor, resultado);
            break;
        case 3:
            printf("\nSaindo do programa...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
}
