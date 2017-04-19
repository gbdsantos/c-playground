#include <stdio.h>
#include <stdlib.h>

//Urna Eletrônica
/*@author Guilherme Bezerra Turma:2PTNA-INFO*/

int main(int argc, char *argv[]) {
	
 int voto,pt,psdb,psb,pso,branco,nulo;

 //while-> enquanto - ou seja enquanto isso faça isso.Primeiro verifica a condição e depois entra no laço.

	pt=0;
	psdb=0;
	psb=0;
	pso=0;
	branco=0;
	nulo=0;


	printf("\t\t\t\t\t\t\t\t\t\t\tUrna Eletronica\n");
		printf ("\t\t |Feito por:Guilherme Bezerra - Turma:2PTNA|\n\n");
 
	do {
 	   printf("\nDigite 13 para Dilma;\n\n Digite 45 para Aecio;\n\nDigite 40 para Marina;\n\nDigite 29 para Rui;\n\nDigite 6 para Branco;\n\nDigite 5 para Nulo;\n\nDigite 0 para Encerrar;\n\n\n");	
	   scanf("%d",&voto);	
 
 	   switch (voto) {
 	   	
	  	   case 13 :
	   	      pt=pt+1;
	       break;
	 
		   case 45 :
		      psdb=psdb+1;
		   break;
			
		   case 40 :
		      psb=psb+1;
		   break;
			 
		   case 29 :
		      pso=pso+1;
		   break;
			 
		   case 6 :
		      branco=branco+1;
		   break;
			
		   case 5 :
	           nulo=nulo+1;
		   break;
			
		   case 0 :
		      printf ("\n Votacao Encerrada - Total de Votos \n");
		   break;
			
		   default :
		      printf ("\n Valor invalido,digite novamente \n"); 
		   break;
		}
	}
	
	while (voto !=0); //Caso o switch seja diferente de 0 - Encerrar  o laço continuará se repetindo
	
	  printf ("\n Dilma:%d \n",pt);
	  printf ("\n Aecio:%d \n",psdb);
	  printf("\n Marina:%d \n",pso);
	  printf("\n Rui:%d \n",psb);
	  printf("\n Brancos:%d \n",branco);
	  printf("\n Nulos:%d \n\n\n",nulo);  
	
	      
		system("PAUSE");
		return 0;

}

    

