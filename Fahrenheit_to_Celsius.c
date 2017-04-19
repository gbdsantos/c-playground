#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  /*Conversão de Fahrenheit para Celsius*/
  /*@author Guilherme Bezerra*/
	float fahrenheit,celsius;
  
    printf("\nDigite o valor da temperatura em Fahrenheit:");
	scanf("%f" ,&fahrenheit);
  
    celsius = fahrenheit-32*5/9;
  
    printf("\nTemperatura convertida para Celsius : %.2f\n" ,celsius);
    
  system("PAUSE");	
  return 0;
}
