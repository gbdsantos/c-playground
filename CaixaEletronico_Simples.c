#include <stdio.h>
#include <stdlib.h>

/*Caixa Eletrônico simples que efetua saque e deposito e ao final exibe o saldo atual*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	
	char opcao;
	int saque,saldo,deposito;   
	
	printf("\nPressione A se deseja sacar ou Pressione B se deseja depositar\n");
	scanf("%c",&opcao);
	
	saldo=10000;
	
	switch (opcao)	{
	
		case 'A' : 
	 		printf("\nQuanto deseja sacar?");
		    scanf("%d",&saque);
	   		printf("\nSeu saldo atual e de :%d\n",saldo-saque);
		break;
	
	
		case 'B' :
			printf("\nQuanto deseja depositar?");
			scanf("%d",&deposito);
	    	printf("\nSeu saldo atual e de :%d\n",saldo+deposito);
		break;
	
		case 'a' : 
	    	printf("\nQuanto deseja sacar?");
	    	scanf("%d",&saque);
	    	printf("\nSeu saldo atual e de : %d\n",saldo-saque);
		break;
	
	
		case 'b' :
			printf("\nQuanto deseja depositar?");
			scanf("%d",&deposito);
	    	printf("\nSeu saldo atual e de :%d \n",saldo+deposito);
		break;
	    
		default:
	    printf ("\nOpcao invalida\n");	    
	}
	
	system("PAUSE");
	return 0;	

	
}
