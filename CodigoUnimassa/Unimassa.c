#include <stdio.h>

int main() 

{
  char operacao;                 
  
  float numero; //Modificado em 
  
  	printf("Escolha uma opcao para conversao: \n\n");
	printf("Digite [1] para conversao de tonelada para quilo: \n");
	printf("Digite [2] para conversao de tonelada para grama: \n");
	printf("Digite [3] para conversao de quilo para tonelada: \n");
	printf("Digite [4] para conversao de quilo para grama: \n");
	printf("Digite [5] para conversao de grama para quilo: \n");
	printf("Digite [6] para conversao de grama para tonelada: \n");
    scanf("%c",&operacao);
  
  printf("Digite um valor para a conversao: ");
  scanf("%f",&numero);
  
  
  switch( operacao ) {
  	
	case '1': printf("%.2f * 1000 = %.2f quilos", numero, numero * 1000); break;
	case '2': printf("%.2f * 1000000 = %.2f gramas", numero, numero * 1000000); break;
	case '3': printf("%.2f / 1000 = %.2f toneladas", numero, numero / 1000); break;
    case '4': printf("%.2f * 1000 = %.2f gramas", numero, numero * 1000); break;
  	case '5': printf("%.2f / 1000 = %.2f quilos", numero, numero / 1000); break;
  	case '6': printf("%.2f / 1000000 = %.2f toneladas", numero, numero / 1000000); break;
  	default: printf("Você digitou uma operacao invalida.");
}
