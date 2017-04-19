#include <stdio.h>
#include <stdlib.h>

/*Desenvolva um programa que leia um vetor do tipo inteiro com 5 posições,e 
exiba seus elementos em ordem crescente*/

/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
    
	int i; //índice
    int vetor[5];
  
    for(i=0;i<5;i++){ //i=0 indice começa igual a zero;até 10;com incremento no indice de 1
    
        printf("\nDigite %do. valor do Vetor e:",i+1); 
        scanf("%d",&vetor[i]);       
    }
                    
    for(i=0;i<5;i++){
        printf("\n\nO valor %do. valor do Vetor e: %d",vetor[i],i+1); 
    }
  
  system("PAUSE");	
  return 0;
}


