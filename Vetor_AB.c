#include <stdio.h>
#include <stdlib.h>

/*
Ler 10 elementos de um vetor A e a partir do �ndice,verificar se o �ndice � par,e se for multiplique o elemento por 5,sen�o some o elemento com 5;

Os resultados das opera��es deverm ser armazenados em um vetor B de mesma dimens�o;
	
Apresentar o vetor A e Vetor B ao final;

Ap�s finalizar a leitura apresentar todos os valores lidos.
*/

/*@author Guilherme Bezerra*/	

int main(int argc, char *argv[])
{
    int i; //�ndice
    int vetor_a[10],vetor_b[10];
    
    for(i=0;i<10;i++){ //i=0 indice come�a igual a zero;at� 10;com incremento no indice de 1
        printf("\nDigite %do. valor:",i+1); 
        scanf("%d",&vetor_a[i]);
    }
    
    
    for (i=0;i<10;i++){ //Para exibir todos os valores cria-se tamb�m um la�o
        printf("\n\nO valores sao: %d\n",vetor[i]);
    }
  
  system("PAUSE");	
  return 0;
}


