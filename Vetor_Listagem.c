#include <stdio.h>
#include <stdlib.h>

//Ler 10 elementos de um veotr,ap�s finalizar a leitura apresentar todos os valores lidos
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]){
    
	int i;
    int vetor[10];
    
    for(i=0;i<10;i++){  //i=0 indice come�a igual a zero;at� 10;com incremento no indice de 1
        printf("Digite od% valor");
        scanf("%d",&vetor[10]);
    }
     
	for (i=0;i<10;i++){ //Para exibir todos os valores cria-se tamb�m um la�o
        printf("\n\nO valores sao: %d\n",vetor[i]);
    }
    
  system("");	
  system("PAUSE");
  return 0;
}

