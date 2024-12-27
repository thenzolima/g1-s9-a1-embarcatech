#include <stdio.h>
#include "tempo.h"

// Função: Segundos p/ Minutos
void segundosParaMinutos(int segundos)
{
    printf("%d segundos = %.2f minutos\n", segundos, segundos / 60.0);
}

// Função: Minutos p/ Horas
void minutosParaHoras(int minutos)
{
    printf("%d minutos = %.2f horas\n", minutos, minutos / 60.0);
}

// Função: Horas p/ Segundos
void horasParaSegundos(int horas)
{
    printf("%d horas = %d segundos\n", horas, horas * 3600);
}

// Menu Interativo
void exibirMenu()
{
    printf("\n------- Conversor de Tempo (seg, min, hrs) -------\n");
    printf("Escolha a conversão:\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Horas\n");
    printf("3. Horas para Segundos\n");
    printf("4. Sair\n");
}

void conversorTempo()
{
    int op;
    float valor, resultado;

    printf("\n------- Conversor de Tempo -------\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Horas\n");
    printf("3. Horas para Segundos\n");
    printf("4. Sair\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &op);

    if (op != 4) {
        printf("\nDigite o valor a ser convertido: ");
        scanf("%f", &valor);
    }

    switch (op)
    {
    case 1:
        resultado = valor / 60.0;
        printf("\n%.2f segundos = %.2f minutos\n", valor, resultado);
        break;
    case 2:
        resultado = valor / 60.0;
        printf("\n%.2f minutos = %.2f horas\n", valor, resultado);
        break;
    case 3:
        resultado = valor * 3600;
        printf("\n%.2f horas = %.2f segundos\n", valor, resultado);
        break;
    case 4:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Escolha inválida!\n");
    }
}
