#include <stdio.h>
#include <stdlib.h>

//Exibe n�meros imp�res de 1 � 100
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
