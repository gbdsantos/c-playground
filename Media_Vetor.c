#include <stdio.h>
#include <stdlib.h>

/*Calculo de média usando Vetores*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
    
	int i;  //Indice do Vetor
    float soma,media;
    float md[5];
     
	soma=0;
    media=0;
     
    for(i=0;i<5;i++){
        printf("\nDigite a média do %do. Aluno:",i+1);
        scanf("%f",&md[i]);
        
		soma=soma+md[i];
                    
    }
     
    media=soma/5;
    printf("A media da turma e: %.2f \n\n",media);
     
  system("PAUSE");	
  return 0;
}

