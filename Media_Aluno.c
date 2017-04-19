#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie um programa que receba o nome do aluno e as notas bimestrais, 
após a leitura de todos os dados, calcule a média de cada aluno e apresente apenas o nome e sua média
@author Guilherme Bezerra
*/

int main(int argc, char *argv[]){
	
 int i,j;
 char nome[15]; 
 float notas[8][4];
 float soma,media;
 
system("TITLE Exercicio 1 - Matriz - Estruturas de Dados"); 
 
 for(i=0;i<=7;i++){
 
   printf("\n---------------------------------------------------------\n");
   printf("\nDigite o nome do %d.o aluno(a) : ",i+1);  
       scanf("%s",&nome);
	       
       for(j=0;j<=3;j++){
       	printf("\nDigite a %d nota do aluno(a) %s : ",j+1,nome);
       	scanf("%f",&notas[i][j]);
       	soma = soma+notas[i][j];
       	
       }
   }
 
  media =  soma / 32;
  printf("\nA media da sala e : %f\n",media);	 
  

system("PAUSE");
return 0;

}
