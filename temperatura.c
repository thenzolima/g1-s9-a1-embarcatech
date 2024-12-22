//MARIA CLARA ALVES NARCISO_EMBARCATECH
#include <stdio.h>

int op;
float c,f,k;

int main()
{
    printf("\n-------Conversor de unidades de temperatura (Celsius, Fahrenheit, Kelvin)-------");
    printf("\n\nESCOLHA A CONVERSAO:\n");
    printf(" 1_Celsius para Fahrenheit \n 2_Fahrenheit para Celsius \n 3_Celsius para Kelvin \n 4_Kelvin para Celsius \n 5_Fahrenheit para Kelvin \n 6_Kelvin para Fahrenheit\n\n DIGITE AQUI A SUA OPCAO: ");
    scanf("%d",&op);

    switch (op)
    {
        case 1:
            printf ("\nDigite a temperatura em Celsius: ");
            scanf ("%f", &c);
            f = ((9 * c + 160) / 5);
            printf ("\nA temperatura em Fahrenheit eh %f\n", f);
        break;

        case 2:
            printf ("\nDigite a temperatura em Fahrenheit: ");
            scanf ("%f", &f);
            c = ((5 * (f - 32)) / 9);
            printf ("\nA temperatura em Celsius eh %f\n", c);
        break;

        case 3:
            printf ("\nDigite a temperatura em Celsius: ");
            scanf ("%f", &c);
            k = (c+273);
            printf ("\nA temperatura em Kelvin eh %f\n", k);
        break;

        case 4:
            printf ("\nDigite a temperatura em Kelvin: ");
            scanf ("%f", &k);
            c = (k-273);
            printf ("\nA temperatura em Celsius eh %f\n", c);
        break;

        case 5:
            printf ("\nDigite a temperatura em Fahrenheit: ");
            scanf ("%f", &f);
            k = (5.0 / 9.0) * (f - 32) + 273;
            printf ("\nA temperatura em Kelvin eh %f\n", k);
        break;

        case 6:
            printf ("\nDigite a temperatura em Kelvin: ");
            scanf ("%f", &k);
            f = (9.0 / 5.0) * (k - 273) + 32;
            printf ("\nA temperatura em Fahrenheit eh %f\n", f);
        break;
        
        default:
            printf("\nErro! Opcao inexistente.");
        break;
    }
        return 0;
}
