#include <stdio.h>
#include <stdlib.h>

//*Cálcula o x1 x2 de uma equação do 2°grau,Sendo que os valores A,B e C sendo fornecidos pelo usuário*//
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
  
   float A,B,C;
   float formulax1,formulax2;
  
    printf("\nDigite o valor de A:");
    scanf("%f" ,&A);
  
    printf("\nDigite o valor de B:");
    scanf("%f" ,&B);
  
    printf("\nDigite o valor de C:");
    scanf("%f" ,&C);
  
    formulax1=(-B+sqrt(pow(B,2)-4*A*C))/2*A;  //Fórmula de Bhaskara x1
    formulax2=(-B-sqrt(pow(B,2)-4*A*C))/2*A; //Fórmula de Bhaskara x2
    
    printf("\nO resultado de X1: %f\n" ,formulax1);
    printf("\nO resultado de X1: %f\n" ,formulax2); 
   
  system("PAUSE");	
  return 0;
}
   
