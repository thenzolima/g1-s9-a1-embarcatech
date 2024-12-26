#include <stdio.h>
#include "area.h"

void conversorArea() {
int op;   
float valor, resultado;
   printf("----------Conversor de Unidades de Área----------\n");   
   printf("1. Metros quadrados (m²) para Centímetros quadrados (cm²)\n");    
   printf("2. Centímetros quadrados (cm²) para Metros quadrados (m²)\n");    
   printf("3. Sair\n");    
   printf("Escolha uma opção: ");    
   scanf("%d", &op);
   
   switch (op)         
   {            
       case 1:                
          printf("Digite o valor em metros quadrados (m²): ");                
          scanf("%f", &valor);                
          resultado = valor * 10000;                 
          printf("%.2f metros quadrados equivalem a %.2f centímetros quadrados.\n", valor, resultado);                
       break;            
       case 2:                
          printf("Digite o valor em centímetros quadrados (cm²): ");                
          scanf("%f", &valor);                
          resultado = valor / 10000;                 
          printf("%.2f centímetros quadrados equivalem a %.2f metros quadrados.\n", valor, resultado);               
       break;            
       case 3:                
          printf("Saindo do programa...\n");                
       break;            
       default:                
          printf("Opção inválida. Tente novamente.\n");        
   }
}
