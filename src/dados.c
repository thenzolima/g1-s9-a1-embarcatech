#include <stdio.h>
#include <string.h>
#include "dados.h"

// Funções auxiliares para conversão
float converte_bytes(float valor, int tipo_dado_inicial, char *c_tipo_dado_inicial) {
    switch (tipo_dado_inicial) {
    case 1:
        strcpy(c_tipo_dado_inicial, "BITS");
        return valor / 8; // Bits para bytes
    case 2:
        strcpy(c_tipo_dado_inicial, "BYTES");
        return valor;
    case 3:
        strcpy(c_tipo_dado_inicial, "KB");
        return valor * 1024;
    case 4:
        strcpy(c_tipo_dado_inicial, "MB");
        return valor * 1024 * 1024;
    case 5:
        strcpy(c_tipo_dado_inicial, "GB");
        return valor * 1024 * 1024 * 1024;
    case 6:
        strcpy(c_tipo_dado_inicial, "TB");
        return valor * 1024LL * 1024 * 1024 * 1024; // Usando long long para evitar overflow
    default:
        strcpy(c_tipo_dado_inicial, "DESCONHECIDO");
        return -1; // Tipo inválido
    }
}

float converte_dado(float v_converte_byte, int tipo_dado_final, char *c_tipo_dado_final) {
    switch (tipo_dado_final) {
    case 1:
        strcpy(c_tipo_dado_final, "BITS");
        return v_converte_byte * 8; // Bytes para bits
    case 2:
        strcpy(c_tipo_dado_final, "BYTES");
        return v_converte_byte;
    case 3:
        strcpy(c_tipo_dado_final, "KB");
        return v_converte_byte / 1024;
    case 4:
        strcpy(c_tipo_dado_final, "MB");
        return v_converte_byte / (1024 * 1024);
    case 5:
        strcpy(c_tipo_dado_final, "GB");
        return v_converte_byte / (1024 * 1024 * 1024);
    case 6:
        strcpy(c_tipo_dado_final, "TB");
        return v_converte_byte / (1024LL * 1024 * 1024 * 1024); // Usando long long para evitar overflow
    default:
        strcpy(c_tipo_dado_final, "DESCONHECIDO");
        return -1; // Tipo inválido
    }
}

// Função principal do conversor de dados
void conversorDados() {
    char c_tipo_dado_inicial[20], c_tipo_dado_final[20];
    float valor = 0, v_converte_byte = 0, v_convert_final = 0;
    int tipo_dado_inicial, tipo_dado_final;

    printf("\n--- CONVERSOR DE UNIDADES DE MEDIDA DE DADOS ---\n\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\nEscolha a unidade de dados atual:\n");
    printf("[1] BITS\n");
    printf("[2] BYTES\n");
    printf("[3] KILOBYTES (KB)\n");
    printf("[4] MEGABYTES (MB)\n");
    printf("[5] GIGABYTES (GB)\n");
    printf("[6] TERABYTES (TB)\n");
    printf("Opção: ");
    scanf("%d", &tipo_dado_inicial);

    v_converte_byte = converte_bytes(valor, tipo_dado_inicial, c_tipo_dado_inicial);
    if (v_converte_byte == -1) {
        printf("\nUnidade de dado inicial inválida.\n");
        return;
    }

    printf("\nEscolha a unidade de dados para conversão:\n");
    printf("[1] BITS\n");
    printf("[2] BYTES\n");
    printf("[3] KILOBYTES (KB)\n");
    printf("[4] MEGABYTES (MB)\n");
    printf("[5] GIGABYTES (GB)\n");
    printf("[6] TERABYTES (TB)\n");
    printf("Opção: ");
    scanf("%d", &tipo_dado_final);

    v_convert_final = converte_dado(v_converte_byte, tipo_dado_final, c_tipo_dado_final);
    if (v_convert_final == -1) {
        printf("\nUnidade de dado final inválida.\n");
        return;
    }

    printf("\nO valor de %.2f %s equivale a %.2f %s.\n", valor, c_tipo_dado_inicial, v_convert_final, c_tipo_dado_final);
}

