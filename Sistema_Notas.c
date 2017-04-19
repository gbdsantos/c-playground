#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* 
Elabore um algoritmo que leia o nome do aluno e suas 4 notas bimestrais [OK]
Calcule a média de cada aluno  [X] 
Ordene os nomes em ordem alfabética [OK] 
Crie uma pesquisa pelo nome, apresente o nome, as notas [OK] 
Informe se ele foi aprovado ou reprovado com média maior ou igual a 5. [X]
*/

/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
	system("TITLE Sistema de Notas de Alunos");	
	
	int i,j,k,l;  //Indices
	char aux[3]; //m[3]; 	
	char nome[3][15], pesq[10] ,status [3][12];
	char resp, acha; //A varivael situação serve para armazenar se o aluno foi Aprovado / Reprovado  
	float notas[3] ,media[3] ,soma;
  
	printf("################################################################################");	
	printf("################################################################################\n");	
	
    //Laço de Leitura dos Nomes e Notas
	for(i=0;i<3;i++){
 
		printf("\n---------------------------------------------------------\n");
		printf("\nDigite o nome do %d.o aluno(a) : ",i+1);  
		scanf("%s",&nome[i]);
	       
        for(j=0;j<=3;j++){
       		printf("\nDigite a %d nota do aluno(a) %s : ",j+1,nome[i]);
       		scanf("%f",&notas[j]);
       		soma = soma+notas[j];
        }
       
       media[i] = soma / 4;
    }  
   
	if (media[i] < 5) {
    	strcpy(status[i], "Aprovado");
    }
    
	else {
   		strcpy(status[i], "Reprovado"); 	
    }

	//Laço para colocar os nomes em ordem alfabetica   
	for(k=0;k<2;k++){
	    for(l = k + 1; l<3; l++){
		    if (strcmp(nome[k], nome[l]) > 0){
			    strcpy(aux, nome[k]);
			    strcpy(nome[k], nome[l]);
			    strcpy(nome[l], aux);	
			}	
		}
	}
	    
    system("CLS");	        
        
    printf("################################################################################");	 
    printf("##                            Listagem de Alunos                              ##");
    printf("################################################################################");  
   
   //Exibição dos nomes em ordem alfabetica
	for(i=0; i<3; i++){
        printf("\n %d - %s ",i,nome[i]);   
    }
        
    printf("\n--------------------------------------------------------------------------------\n");
    printf("################################################################################\n");
    printf("--------------------------------------------------------------------------------\n");
		  
	resp='s'; 
	   
  //Início da estrutura de Pesquisa por nome	
	while(resp == 's'){
                   
  	    printf("\nDigite o nome que deseja pesquisar :");
		scanf("%s",&pesq);
	         
	    i=0;
	    acha='f';
	              
	    //Parametros de Pesquisa
	    while(i <=3 && acha=='f'){    
	    	if(strcmp ( pesq , nome[i] ) == 0){   
	      	    acha='v';
	      	}
	                    
			else{
	            i=i+1;
	        }
	    }
	              
		if(acha='v'){
			printf ("\n %s foi localizado! Na linha  %d. \n",nome[i], i+1 );
	        printf("\nA media de %.2f:\n", media[i]);
			printf("\nStatus: %s", status);			   
		}
	                
	    else{
	        printf("\n%s Não foi localizado nenhum \n",pesq);
	    }
	     
		printf("\nDeseja continuar? [S/N]")/
		scanf("%s",&resp);
 	}
	
	system("PAUSE");	
	return 0;
}
