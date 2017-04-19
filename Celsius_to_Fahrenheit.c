#include <stdio.h>
#include <stdlib.h>

/*Conversão de Celsius para Fahrenheit*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {

   float fahrenheit,celsius;
  
    printf("\nDigite o valor da temperatura em Celsius:");
    scanf("%f" ,&celsius);
  
    fahrenheit=(celsius*9/5)+32;
  
    printf("\nTemperatura convertida para Fahrenheit : %.2f\n" ,fahrenheit);
  
  system("PAUSE");	
  return 0;
}
