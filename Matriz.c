#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Desenvolva um algoritmo que receba 25 valores numéricos inteiros numa matriz 5x5 e mostre esses números*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
	
    int i,j;
    float m1[4][4];

    system("TITLE Exercicio 2 - Matriz - Estruturas de Dados");

   for(i=0;i<=4;i++){
    	
		printf("\nDigite o %do valor da Linha M1 :",i+1);
		scanf("%f",&m1[i][j]);
      
        for(j=0;j<=4;j++){
       	   printf("\nDigite o %do valor da Coluna M1:",j+1);
       	   scanf("%f",&m1[i][j]);
        }
    }
   
    for(i=0;i<=4;i++){
        printf("\nValor da Linha\n");
		printf("%f\n",m1[i][j]);
       	  
        for(j=0;j<=4;j++){
       	   printf("\nValor da Coluna\n");
		   printf("%f\n",m1[i][j]);
                      	   	
       	}   	
    }




system("PAUSE");
return 0;
}
