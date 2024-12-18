/*Exemplo de Tarefas que o grupo poderá desenvolver. 
Observação: Não é obrigatório implementar todas as conversões sugeridas. 
1. Unidades de comprimento (metro, centímetro, milímetro) 
2. Unidades de massa (quilograma, grama, tonelada) 
3. Unidades de volume (litro, mililitro, metros cúbicos) 
4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin) 
5. Unidades de velocidade (km/h, m/s, mph) 
6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp) 
7. Unidades de área (metro quadrado, centímetro quadrado) 
8. Unidades de tempo (segundos, minutos, horas) 
9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB) 
10. Interface de usuário 
11. Testes e depuração */

#include <stdio.h>

void converterComprimento(float valor, char unidade) {
    switch (unidade) {
        case 'm': // De metros para cm e mm
            printf("%.2f metros é igual a:\n", valor);
            printf("- %.2f centímetros\n", valor * 100);
            printf("- %.2f milímetros\n", valor * 1000);
            break;
        case 'c': // De centímetros para m e mm
            printf("%.2f centímetros é igual a:\n", valor);
            printf("- %.2f metros\n", valor / 100);
    -            printf("- %.2f milímetros\n", valor * 10);
            break;
        case 'mm': // De milímetros para m e cm
            printf("%.2f milímetros é igual a:\n", valor);
            printf("- %.2f metros\n", valor / 1000);
            printf("- %.2f centímetros\n", valor / 10);
            break;
        default:
            printf("Unidade inválida! Use 'm' para metros, 'c' para centímetros ou 'mm' para milímetros.\n");
    }
}

int main() {
    float valor;
    char unidade[3];

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite a unidade (m, c, mm): ");
    scanf("%s", unidade);

    converterComprimento(valor, unidade[0]);

    return 0;
}
