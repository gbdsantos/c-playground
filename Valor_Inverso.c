#include <stdio.h>
#include <stdlib.h>

//Inversão de valores
/*@author Guilherme Bezerra*/   

int main(int argc, char *argv[]) {
 
float A,B,C;

  printf("\nDigite o valor de A:");
  scanf("%f" ,&A);
  
  printf("\nDigite o valor de B:");
  scanf("%f",&B);
  
  C=A;
  A=B;
  B=C;
  
  printf("\nValor de A %.1f" ,A);
  printf("\nValor de B %.1f\n" ,B);
  
  system("PAUSE");	
  return 0;
}
