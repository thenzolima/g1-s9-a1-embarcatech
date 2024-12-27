#include <stdio.h>
#include "temperatura.h"
#include "potencia.h"
#include "velocidade.h"
#include "area.h"
#include "tempo.h"
#include "massa.h"
#include "dados.h"
#include "comprimento.h"

int main()
{
    int opcao;

    do
    {
        printf("\n------- Menu Principal -------\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Conversor de Potencia\n");
        printf("3. Conversor de Velocidade\n");
        printf("4. Conversor de Área\n");
        printf("5. Conversor de Tempo\n");
        printf("6. Conversor de Massa\n");
        printf("7. Conversor de Dados\n");
        printf("8. Conversor de Comprimento\n");
        printf("9. Sair\n");
        printf("Digite a sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
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
            conversorArea();
            break;
        case 5:
            conversorTempo();
            break;
        case 6:
            conversorMassa();
            break;
        case 7:
            conversorDados();
            break;
        case 8:
            conversorComprimento();
            break;
        case 9:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 9);

    return 0;
}
