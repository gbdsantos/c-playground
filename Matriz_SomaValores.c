#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um algoritmo que receba 120 valores numéricos inteiros em uma matriz 10x12 e mostre a soma desses 120 números*/
	
int main(int argc, char *argv[]){
	
	int i,j;
	int m1[9][11], m2[9][11], m3[9][11];

	for(i=0;j<=119;i++){
    	printf("\nDigite o %do valor da matriz M1",i+1);
        scanf("%d",&m1[i][j]);
    
        printf("\nDigite o %do valor da matriz M2",i+1);
        scanf("%d",&m2[i][j]);
    
    	m3[i][j] = m1[i][j] + m2[i][j];   
    }
   
    for(i=0;j<=119;i++){
        printf("\nOs valores sao: %d\n",m3[i][j]);
       	
    }

	return 0;
	system("PAUSE");
}
