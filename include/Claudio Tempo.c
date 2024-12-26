/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Função: Segundos p/ Minutos
void segundosParaMinutos(int segundos) {
    printf("%d segundos = %.2f minutos\n", segundos, segundos / 60.0);
}

// Função: Minutos p/ Horas
void minutosParaHoras(int minutos) {
    printf("%d minutos = %.2f horas\n", minutos, minutos / 60.0);
}

// Função: Horas p/ Segundos
void horasParaSegundos(int horas) {
    printf("%d horas = %d segundos\n", horas, horas * 3600);
}

// Menu Interativo
void exibirMenu() {
    printf("Escolha a conversão:\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Horas\n");
    printf("3. Horas para Segundos\n");
    printf("4. Sair\n");
}

int main() {
    int escolha, valor;

    do {
        exibirMenu();
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        if (escolha == 4) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%d", &valor);

        switch (escolha) {
            case 1:
                segundosParaMinutos(valor);
                break;
            case 2:
                minutosParaHoras(valor);
                break;
            case 3:
                horasParaSegundos(valor);
                break;
            default:
                printf("Escolha inválida!\n");
        }
    } while (escolha != 4);

    return 0;
}
