#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Em uma pesquisa do IBOPE foram coletadas informações sobre a eleição municipal com a participação de 4 (quatro) candidatos.
O número de pessoas entrevistadas foi indeterminado.
Apresentar ao fianl da pesquisa os totais de cada candidato em ordem decrescente (do mais votadoao menos votado).Crie um programa que exiba a 
quantidade de votos de cada candidato,dos brancos e nulos e exiba o candidato com mais votos e sua porcentagem de aprovação.
@author Guilherme Bezerra Turma:3PTNA-INFO*/

int main(int argc, char *argv[]) {

char voto [6] = {0,0,0,0,0,0}, candidato[4][15] ;	
int i = 0, j = 0; //indice voto
int k = 0, l = 0; //indice candidato
int aux = 0; 
int caso;
char retorno;
 

system("TITLE [Pesquisa IBOPE]");

    printf("\n-------------------------------------------------------\n");
    printf ("ELEICAO MUNICIPAL\n\n");
    printf ("\t Developed by:Guilherme Bezerra - Turma:3PTNA - INFO\n\n");
    printf("\n-------------------------------------------------------\n");

     for(k=0;k<4;k++){    
        printf("\nDigite o nome do %d.o candidato(a) :",k+1);
        scanf("%s",&candidato[k]);  
     }   
    
do {
  
   printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

        for(k=0;k<4;k++){  
            printf("\n Pressione [%d] se vai votar no candidato(a) %s :\n",k+1,candidato[k]);
        }
     
        scanf("%d",&caso);
   
 switch (caso) {
  
  case 1 :
   voto[1]=voto[1]+1;
    break;
 
 case 2 :
  voto[2]=voto[2]+1;
  break;

 case 3 :
  voto[3]=voto[3]+1;
   break;
 
  case 4 :
   voto[4]=voto[4]+1;
    break;
 
 case 5 :
  voto[5]=voto[5]+1;
   break;

 case 6 :
  voto[6]=voto[6]+1;
   break;
   
  default :
  printf ("\n Valor invalido,digite novamente \n"); 
	 break;
	 	 
 }
 
  printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
 
 
//Ordenação Decrescente 
     for(i=0;i<6;i++){
           if(voto[i]>voto[i]){
              aux=voto[i];
              voto[i]=voto[i];
              voto[i]=aux;
           }
     }  
 
  printf("\n-------------------------------------------------------\n");
  
  printf("\nDeseja continuar [s]/[n] :\n");
  scanf("%c",&retorno); 
  
}
 while (retorno != 's' ); 
 
//Exibição dos votos candidatos   
 
  printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

  for(k=0;k<4;k++){  
      for(i=0;i<4;i++){
           printf("\n Total de votos do candidato(a) %s :\n",candidato[k],voto[i]);
         }
       }
       
  //printf("Porcentagem de Aprovação do mais votado",)  
    
  printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

     
	system("PAUSE");
	return 0;

}

    

