#include <stdio.h>
#include <stdlib.h>

/*@author Guilherme Bezerra*/

int main(int argc, char *argv[]) {

int idade; 

 printf ("\nDigite a sua idade:");
 scanf  ("%d" ,&idade);

 if (idade>=5 && idade<=7)
    printf("\nSua classificacao e Infantil A\n");
 
 if (idade>=8 && idade<=10)
    printf("\nSua classificacao e Infantil B\n");
 
 if (idade>=11 && idade<=13 )
     printf("\nSua classificacao e Juvenil A\n");
 
 if (idade>14 && idade<=17)
 printf("\nSua classificacao e Juvenil B\n");

 else 
  printf ("\nSua classificacao e Senior\n");

    system ("PAUSE");
	return 0;
}
