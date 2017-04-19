#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Pesquisa Sequencial de Matriz*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
    
	int i;
    char pesq[10], resp, acha;
    char nome[10][10];
    
    //Laço para ler o 5 nomes
    for (i=1; i<=5; i++){
        printf ("Digite um nome:");
        scanf ("%s", &nome[i]);
    }
    
	resp = 's';
       
	//Utilização do while,enquanto a resposta for sim fazer o que há abaixo 
    while (resp == 's'){
    	printf ("Digite o nome a ser pesquisado\n\n");
        scanf ("%s", &pesq);            
            
        i=1;
        acha='f';
            
    	//Estrutura de Pesquisa do Nome  
		while (i <= 5 && acha=='f'){
                      
			if (strcmp (pesq,nome[i]) == 0){
                acha='v'; 
            }
                   
			else{
            	i=i+1;
            } 
        } 
                     
               
        if (acha=='v'){
        	printf ("\n%s Foi localizado na linha  %d:° \n",pesq, i );
        }  
             
		else{
        	printf ("\n %s Não foi Localizado:  ",pesq);
        }
              
		printf ("\nDeseja Continuar ? [S/N]" ); 
        scanf("%s",&resp);
    }    
  
	system("PAUSE");	
	return 0;
}
