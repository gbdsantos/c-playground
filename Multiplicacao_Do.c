#include <stdio.h>
#include <stdlib.h>

/*Multiplicação usando Do*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){

    int  r,n;
    n=1;

do {
    r=5*n; 
    printf("5 x %d = %d\n" ,n,r);
    n=n+1;
}
    while(n<=10);
  
  
  system("PAUSE");	
  return 0;
}
