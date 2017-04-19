#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Elabore um algoritmo que leia 15  nomes, e 15 telefones, pesquise o nome solicitado e apresente o nome e o telefone correspondente
@author Guilherme Bezerra
*/

int main(int argc, char *argv[]){
	
	int i , l;
	char nome[10][10],tel [12] ,pesq[10]; 
	char resp ,acha;
	
	for(i=1;i<=3;i++){
	
	    printf("\nDigite o %d nome :",i);
	    scanf("%s",&nome[i]);	
	
		for(l=0;l<=0;l++){
	     
		    printf("\nDigite o numero de telefone :");
		    scanf("%s",&tel[l]); 
		    printf("\n--------------------------------------------------------------------------------\n");
	    }	
	}
	
//Estrutura de pesquisa

    resp='s';
    
    while (resp == 's'){
      
        printf("\nDigite o nome que deseja pesquisar :");
        scanf("%s",&pesq);
	
	    while(i<=5 && acha=='f'){
	           	
	        if(strcmp (pesq,nome[i]) == 0 ){
	        	acha='v';
	        }
						   
	        else{
	        	i=i+1; 
	        }
	           	
	        if(acha='v'){
	        	printf("\n%s foi localizado,na linha %d",pesq,i);
	        	printf("\n Numero de Telefone %s:",tel[l]);
			}
	           	
	        else{
	        	printf("\n% nao foi localizado",pesq);
	        }           	      	   	   	          	           	
	    }	   
		 
	    printf("\nDeseja continuar? [S/N] : ");
	    scanf("%s",resp);
    }
      
	return 0;
	system("PAUSE");
	
}
