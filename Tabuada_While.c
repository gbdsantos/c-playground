#include <stdio.h>
#include <stdlib.h>

//Tabuada usando While
/*@author Guilherme Bezerra*/
int main(int argc, char *argv[])
{
    int v,r,n;
    
  n=1;
     printf ("\nDigite o número da tabuada desejada:");
     scanf ("%f",&v);
	      
  while (n<=10) {
  r=v*n;
  printf(r,"\nx %f = %f\n", n,r);
  n=n+1;
}



}
