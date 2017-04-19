#include <stdio.h>
#include <stdlib.h>

/*Intervalo de valores */
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	int idade;
	
	printf ("\nDigite a sua idade:");
	scanf ("%d" ,idade);
	
	if (idade>=10 && idade<=18)
	
		printf("\nSua idade esta no intervalo");
	
	else
	
		printf("\nSua idade nao esta no intervalo");
	
	
	
	system("PAUSE");
	return 0;
}
