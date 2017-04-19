#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*Caixa Eletrônico, onde o usuário terá as opções: saldo, depósito e empréstimo pessoal  
Caso o usuário erre a senha mais de 3 vezes,deverá retornar a agência, e o programa deverá ser encerrado - Loping saldo*/

/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
		
	int opcao,senha,senha_valida,cont;
	float emprestimo,saque,saldo,deposito,saldo_fin;
    char nome[21];		
    
    cont=0;
	saldo=10000;
    saldo_fin=0;
      
  do{
       

        //Menu de cadastro de usuário
        printf("\n");
        printf("   ##################################################### \n");
        printf(" ######################################################### \n");
	    printf("###############<--Caixa Eletronico S.A->>##################\n");
	    printf("###########################################################\n");	
		printf(" ######################################################### \n");
		printf("\t\t<Desenvolvido por: Guilherme e Artilene>\n\n");
		
		 
		printf("\nDigite seu nome:");
		scanf("%s",nome);
		  
        printf ("\nCadastre a sua senha de 6 digitos:");
		scanf("%d",&senha);
		
		printf ("\nConfirme a sua senha de 6 digitos:");
		scanf("%d",&senha_valida);

   
  		  
        //Validando a senha 
        if  (senha==senha_valida ){ 
 
        	system("CLS");
 
            do {
                	
            	printf("\t########################################################");
            	printf("\n \t <<-Seja bem vindo a sua conta bancaria,%s!->>\n",nome);
            	printf("\t########################################################\n\n\n");
   
 
                printf("\n<Pressione 1 para Saque>\n \n<Pressione 2 para Deposito>\n \n<Pressione 3 para Emprestimo Pessoal>\n \n<Pressione 0 para finalizar>\n");
		        scanf("%d",&opcao);
                             
							  
				//Opções do caixa eletrônico
				switch (opcao) {
                                      
					case 1 :
                        printf("\nDigite a sua senha:");
                        scanf("%d",&senha);
                              
						if (senha==senha_valida && cont<3){
                            printf("\nQuanto deseja sacar?");
                            scanf("%f",&saque);
	                        	
							saldo_fin=saldo-saque;
							
							printf("\nSeu saldo atual e de :%.2f\n",saldo_fin);	                                             			             
						}
						        
						else {
						    system("CLS");
						    printf("\nSenha incorreta,tente novamente\n");
						    cont=cont+1;     
						}  
					break; 
		
		            case 2 :
		                printf("\nDigite a sua senha:");
                        scanf("%d",&senha);
                              
						if (senha==senha_valida && cont<3){
                                        
							printf("\nQuanto deseja depositar?");
                            scanf("%f",&deposito);
                            saldo_fin=saldo+deposito;
							printf("\nSeu saldo atual e de :%.2f\n",saldo_fin);                                                                                             
						}

						else {
							system("CLS");
						    printf("\nSenha Incorreta ,tente novamente\n");
						    cont=cont+1;   
						}
					break;
		 
		            case 3 :
		                printf("\nDigite a sua senha:");
                        scanf("%d",&senha);
                                     
						if (senha==senha_valida && cont<3){
                                              
							printf("\nQuando deseja de empretismo? (Lembrando que ha os juros de 20%)");
                            scanf("%f",&emprestimo);
                            saldo_fin=(saldo-emprestimo)+(emprestimo*0.20);
                            printf ("Seu saldo devedor e: %.2f\n",saldo_fin);                                                                                               						                        
	                    }
	                                  
	                    else {
	                        system("CLS");
	                        printf("\nSenha Incorreta,tente novamente\n");
							cont=cont+1;
						}
					break;
	                                  
	                default:
                    printf ("\nOpcao invalida,tente novamente!\n\n\n");        		                                     
                }//Final do switch,lopping para as operações do Caixa Eletrônico                 
            }//Finalizacão da Operação
            
			while (opcao!=0);
	        system("CLS");
			printf("\nOperacao Encerrada\n\n\n");		            	            
        }//Caso a senha seja digitada incorretamente,saída do if
		else
            if (senha != senha_valida) {
                cont=cont+1;
				printf("\n\nDesculpe,as senhas nao conferem tente novamente!\n\n");		      
			}                 
    }//Lopping do inicio do Caixa Eletrônico
    
	while(senha!=9);
        system("CLS");
        printf("Caixa Fechado,dirija-se a outro\n\n\n");
         
	system("PAUSE");
	return 0;	

}


