/*
6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp) 
*/


#include <stdio.h>

//  Constantes para a conversão
#define CV_W 735.49875  
#define W_KW 1000.0     
#define HP_W 745.7     


void converterWatts() {
    double watts, resultado;
    int seleção;

    printf("\n1. Watts para kW\n");
    printf("2. Watts para cv\n");
    printf("3. Watts para hp\n");
    printf("Selecione: ");
    scanf("%d", &seleção);

    printf("Digite o valor em Watts: ");
    scanf("%lf", &watts);

    switch (seleção) {
        case 1:
            resultado = watts / W_KW;
            printf("%.2lf Watts = %.2lf kW\n", watts, resultado);
            break;
        case 2:
            resultado = watts / CV_W;
            printf("%.2lf Watts = %.2lf cv\n", watts, resultado);
            break;
        case 3:
            resultado = watts / HP_W;
            printf("%.2lf Watts = %.2lf hp\n", watts, resultado);
            break;
        default:
            printf("Comando Invalido!\n");
            break;
    }
}

void converterOutros() {
    double valor, resultado;
    int selecao;

    printf("\n1. kW para Watts\n");
    printf("2. cv para Watts\n");
    printf("3. hp para Watts\n");
    printf("Escolha uma opção: ");
    scanf("%d", &selecao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (selecao) {
        case 1:
            resultado = valor * W_KW;
            printf("%.2lf kW = %.2lf Watts\n", valor, resultado);
            break;
        case 2:
            resultado = valor * CV_W;
            printf("%.2lf cv = %.2lf Watts\n", valor, resultado);
            break;
        case 3:
            resultado = valor * HP_W;
            printf("%.2lf hp = %.2lf Watts\n", valor, resultado);
            break;
        default:
            printf("Comando Invalido!\n");
            break;
    }
}

int main() {
    int selecao;

    do {
        printf("\nConversor de Potencia\n");
        printf("1. Converter de Watts\n");
        printf("2. Converter para Watts\n");
        printf("3. Sair\n");
        printf("Selecione: ");
        scanf("%d", &selecao);

        switch (selecao) {
            case 1:
                converterWatts();
                break;
            case 2:
                converterOutros();
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Comando Invalido!\n");
                break;
        }
    } while (selecao != 3);

    return 0;
}