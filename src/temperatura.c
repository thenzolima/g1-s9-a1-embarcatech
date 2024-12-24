//MARIA CLARA ALVES NARCISO_EMBARCATECH
#include <stdio.h>
#include "temperatura.h"

void conversorTemperatura() {
    int op;
    float c, f, k;

    printf("\n------- Conversor de Temperatura (Celsius, Fahrenheit, Kelvin) -------\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Fahrenheit para Kelvin\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &c);
            f = ((9 * c + 160) / 5);
            printf("\nA temperatura em Fahrenheit eh %.2f\n", f);
            break;
        case 2:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &f);
            c = ((5 * (f - 32)) / 9);
            printf("\nA temperatura em Celsius eh %.2f\n", c);
            break;
        case 3:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &c);
            k = c + 273.15;
            printf("\nA temperatura em Kelvin eh %.2f\n", k);
            break;
        case 4:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &k);
            c = k - 273.15;
            printf("\nA temperatura em Celsius eh %.2f\n", c);
            break;
        case 5:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &f);
            k = (5.0 / 9.0) * (f - 32) + 273.15;
            printf("\nA temperatura em Kelvin eh %.2f\n", k);
            break;
        case 6:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &k);
            f = (9.0 / 5.0) * (k - 273.15) + 32;
            printf("\nA temperatura em Fahrenheit eh %.2f\n", f);
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
}
