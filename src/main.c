#include <stdio.h>
#include "temperatura.h"
#include "potencia.h"
#include "velocidade.h"

int main() {
    int opcao;

    do {
        printf("\n------- Menu Principal -------\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Conversor de Potencia\n");
        printf("3. Conversor de Velocidade\n");
        printf("4. Sair\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                conversorTemperatura();
                break;
            case 2:
                conversorPotencia();
                break;
            case 3:
                conversorVelocidade();
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
