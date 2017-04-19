#include <stdio.h>
#include <stdlib.h>

//Exibe números impáres de 1 à 100
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) 
{
	
	int num; 

	for(num=1;num<=100;num++) { 
	
		if(num %2==1) { 
			printf("\n%d",num); 
		} 
	}
 
 system("PAUSE");	
 return 0;	
	
}
