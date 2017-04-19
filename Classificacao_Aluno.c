#include <stdio.h>
#include <stdlib.h>

/*Média de notas*/
/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {
	
	 float nota1,nota2,nota3,nota4,media;
	 
	 printf("\n####################################################\n");
	 printf("\n###Media do aluno e classificacao do seu conceito###\n");
	 printf("\n####################################################\n");
	 
	 printf("\nDigite a nota 1 :");
	 scanf("%f",&nota1);
	 
	 printf("\nDigite a nota 2 :");
	 scanf("%f",&nota2);
	 
	 printf("\nDigite a nota 3 :");
	 scanf("%f",&nota3);
	 
	 printf("\nDigite a nota 4 :");
	 scanf("%f",&nota4);
	 system("CLS");
	 
	media=(nota1+nota2+nota3+nota4)/2;
	
	
	if(media>=5) 
	
	    printf("\nAluno Aprovado!\n\n");
	
	    if (media>=9)
	        printf("\nO conceito deste aluno e A\n\n\n");
    
	       if (media>=7 && media<=8.9)
	           printf("\nO conceito deste aluno e B\n\n\n");
  
	                if(media>=5 && media<=6.9)
                         printf("\nO conceito deste aluno e C\n\n\n");
	
	
	else  
	  if (media<=4.9)
	    	printf("\nAluno Reprovado!\n\n");
	         	
				 if(media>=2.5 && media<=4.9)
	               printf("\nO conceito deste aluno e D\n\n\n");
		        
			        	if(media<=2.5)
	                       printf("\nO conceito deste aluno e E\n\n\n");
	    
	    printf("\nA media do aluno e : %f\n\n",media);
	
	system("PAUSE");
	return 0;
}

