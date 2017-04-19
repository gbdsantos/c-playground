#include <stdio.h>
#include <stdlib.h>
/**/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	
	float altura,difpercent,taltura;
	int count_f,count_m,sexo; 
		
	count_f=0;
	count_m=0;
	
	printf("\n##Legenda##\n1-[Masculino]\n2-[Feminino]\n3-[Encerrar]\n");
	
	do {
		printf("\nDigite qual e o seu sexo:");
	    scanf("%d",&sexo);
		       
		printf("\nDigite o valor da sua altura:");
	    scanf("%f",&altura);
	       
	    switch (sexo) {
	    
	        case 1 :
	    	    count_m=count_m+1;
	        break;
			
	        case 2 : 
	    	    count_f=count_f+1;
	            taltura=taltura+altura/count_f;
	        break;
		 
		    case 3:
		        system("CLS");
				printf("\n<<<Operacao Encerrada>>>");
			break;
					 
	        default :
	            printf("\n\n<<<Opcao Invalida>>>\n\n");
	        break;
        }          
    }
   
   while (sexo!=3);
                             
    printf("\n\nA media de altura das mulheres e:",taltura);
	        
    printf("\n\nO numero de homens e :%d",count_m);
	
	difpercent=(count_m+count_f/2)/(count_m-count_f)*100;
	        
    printf("\n\nA diferenca percentual entre homens e mulheres e %f:\n\n",difpercent); 
	
	/*fórmula diferença percentual 
	homens+mulheres/2=media  
	homens-mulheres=diferenca
	diferenca/media*100 = diferenca percentual*/
	          
	system("PAUSE");
	return 0;	
}
