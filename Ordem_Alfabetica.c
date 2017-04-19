#include <stdio.h>
#include <stdlib.h>

/*Lê 5 nomes e os coloca em ordem alfabetica*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	
    int i,j,aux;
    char nome[30][30];
    
    for(i=0;i<5;i++){
       printf("\nDigite um nome: ");
       scanf("%s",&nome[i][j]);
    }
 
    for(i=0;i<4;i++){
       for(j=i+1;j<5;j++){
           if(nome[i][j]>nome[i][j]){
              aux=nome[i][j];
              nome[i][j]=nome[i][j];
              nome[i][j]=aux;
           }
        } 
     }                                         
                           
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("%s",nome[i][j]);
        }    
    }    
      
	return 0;
}
