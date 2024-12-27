#include <stdio.h>
#include "comprimento.h"

#define M_CM 100.0      // 1 metro = 100 centímetros
#define M_MM 1000.0     // 1 metro = 1000 milímetros
#define CM_MM 10.0      // 1 centímetro = 10 milímetros

void converterDeMetros() {
    double metros, resultado;
    int selecao;

    printf("\n1. Metros para centímetros\n");
    printf("2. Metros para milímetros\n");
    printf("Selecione: ");
    scanf("%d", &selecao);

    printf("Digite o valor em metros: ");
    scanf("%lf", &metros);

    switch (selecao) {
        case 1:
            resultado = metros * M_CM;
            printf("%.2lf metros = %.2lf centímetros\n", metros, resultado);
            break;
        case 2:
            resultado = metros * M_MM;
            printf("%.2lf metros = %.2lf milímetros\n", metros, resultado);
            break;
        default:
            printf("Comando Inválido!\n");
            break;
    }
}

void converterOutros() {
    double valor, resultado;
    int selecao;

    printf("\n1. Centímetros para metros\n");
    printf("2. Milímetros para metros\n");
    printf("3. Centímetros para milímetros\n");
    printf("Selecione: ");
    scanf("%d", &selecao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (selecao) {
        case 1:
            resultado = valor / M_CM;
            printf("%.2lf centímetros = %.2lf metros\n", valor, resultado);
            break;
        case 2:
            resultado = valor / M_MM;
            printf("%.2lf milímetros = %.2lf metros\n", valor, resultado);
            break;
        case 3:
            resultado = valor * CM_MM;
            printf("%.2lf centímetros = %.2lf milímetros\n", valor, resultado);
            break;
        default:
            printf("Comando Inválido!\n");
            break;
    }
}

void conversorComprimento() {
    int selecao;

    do {
        printf("\nConversor de Comprimento\n");
        printf("1. Converter de Metros\n");
        printf("2. Converter outras unidades\n");
        printf("3. Voltar ao Menu Principal\n");
        printf("Selecione: ");
        scanf("%d", &selecao);

        switch (selecao) {
            case 1:
                converterDeMetros();
                break;
            case 2:
                converterOutros();
                break;
            case 3:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Comando Inválido!\n");
                break;
        }
    } while (selecao != 3);
}
