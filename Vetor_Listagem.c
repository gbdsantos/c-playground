#include <stdio.h>
#include <stdlib.h>

//Ler 10 elementos de um veotr,após finalizar a leitura apresentar todos os valores lidos
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
    
	int i;
    int vetor[10];
    
    for(i=0;i<10;i++){  //i=0 indice começa igual a zero;até 10;com incremento no indice de 1
        printf("Digite od% valor");
        scanf("%d",&vetor[10]);
    }
     
	for (i=0;i<10;i++){ //Para exibir todos os valores cria-se também um laço
        printf("\n\nO valores sao: %d\n",vetor[i]);
    }
    
  system("");	
  system("PAUSE");
  return 0;
}

