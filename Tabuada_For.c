#include <stdio.h>
#include <stdlib.h>

//Tabuada do 5 usando For
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){

	int v,r;

	for (v=1;v<=10;v++) {
		r=5*v;
		printf ("\n5x%d = %d",v,r);    
	} 
	
  system("PAUSE");	
  return 0;
}
