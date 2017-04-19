#include <stdio.h>
#include <stdlib.h>
/*@author Guilherme Bezerra Turma:2PTNA-INFO*/
// Cácula a média de quatro notas

int main(int argc, char *argv[])
{
  float n1,n2,n3,n4;
  float media;
  
  printf ("\nDigite a nota 1 :");
  scanf  ("%f" ,&n1);
  
  printf ("\nDigite a nota 2 :");
  scanf  ("%f" ,&n2);
  
  printf ("\nDigite a nota 3 :");
  scanf  ("%f" ,&n3);
  
  printf ("\nDigite a nota 4 :");
  scanf  ("%f" ,&n4);
    
  media = (n1+n2+n3+n4)/4;
 
  printf ("\nSua media e : %f\n" , media);
  
  system("PAUSE");	
  return 0;

}
