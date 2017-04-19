#include <stdio.h>
#include <stdlib.h>

/* Verifica se os valores sastifazem um triângulo e qual é o tipo dele */
/*@author Guilherme Bezerra*/
int main(int argc, char *argv[]) {

float A,B,C;

printf ("\nDigite o valor de A:");
scanf ("%f" ,&A);

  printf ("\nDigite o valor de B:");
  scanf ("%f" ,&B);

printf ("\nDigite o valor de C:");
scanf ("%f" ,&C);

/*Verifica se as medidas equivalem a um triângulo*/
     if (A<B+C && B<A+C && C<A+B) 
     
/*Verifica o tipo de triângulo de acordo com suas medidas e seus respectivos lados*/     
	 if (A==B && B==C)
     	printf ("\nTriangulo Equilátero\n");
     
     else 
        	if (A==B || B==C || A==C)
         printf ("\nTriangulo Isosceles\n");
          
		  else 
            printf ("\nTriangulo Escaleno\n");
            
    else
       printf ("\nOs valores não sastifazem um triangulo");
     
system ("PAUSE");
	return 0;
}
	

