#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Construa um algoritmo que efetue a leitura, a soma e a impressão do resultado entre duas matrizes inteiras que comportem 25 elementos*/

int main(int argc, char *argv[]){
	
	int i,j;
	int m1[4][4], m2[4][4], m3[4][4];

//Cadeia de Laços Para Leitura
	for(i=0;i<=4;i++){
      
	   printf("\nDigite o %do valor da Linha M1 :",i+1);
       scanf("%f",&m1[i][j]);
      
       for(j=0;j<=4;j++){
           printf("\nDigite o %do valor da Coluna M1:",j+1);
       	   scanf("%f",&m1[i][j]);
        }		 
   }
    
	for(i=0;i<=4;i++){
    	printf("\nDigite o %do valor da Linha M2 :",i+1);
        scanf("%f",&m2[i][j]);
                   
		for(j=0;j<=4;j++){
       	   printf("\nDigite o %do valor da Coluna M2:",j+1);
       	   scanf("%f",&m2[i][j]);
        } 
    }
        
    m3[i][j] = m1[i][j] + m2[i][j]; 
   
//Laço para exibição 
    for(i=0;i<=4;i++){
    	
        printf("\nValor da Linha\n");
		printf("%f\n",m1[i][j]);
       	  
        for(j=0;j<=4;j++){
       	   	printf("\nValor da Coluna\n");
			printf("%f\n",m1[i][j]);               	   	
        }   	
    }

	return 0;
	system("PAUSE");

}
