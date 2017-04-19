#include <stdio.h>
#include <stdlib.h>

/*Soma de dois valores e o usuário pode optar por qual operação realizar*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	
	char opcao;
	float valor_a,valor_b;
	
	printf ("\nPressione [A] para adicao\n"); 
	printf ("\nPressione [B] subtracao\n"); 
	printf ("\nPressione [C] para multiplicacao\n"); 
	printf ("\nPressione [D] para divisao\n");
	scanf("%c",&opcao);	
	
	system("CLS");
	printf("\nDigite o primeiro valor:");
	scanf("%f",&valor_a);
	
	printf("\nDigite o segundo valor:");
	scanf("%f",&valor_b);
	
	switch (opcao) 
	{
	case 'A':
        printf("\nA soma dos valores e:[%f]\n\n\n" ,valor_a+valor_b);     
      break;
	
	case 'B':
	    printf("\nA subtracao dos valores e: [%f]\n\n\n" ,valor_a-valor_b);	
	 break;
	  
	case 'C':
	    printf("\nA multiplicacao dos valores e [%f]\n\n\n" ,valor_a*valor_b);
	 break;
	  
	case 'D':
	     printf("\nA divisao dos valores e: [%f]\n\n\n" ,valor_a/valor_b);
      break;
      
      default: 
       printf("\nOperacao nao realizada\n\n\n");
       
}
	system("PAUSE");
	return 0;
}
