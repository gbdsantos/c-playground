#include <stdio.h>
#include <stdlib.h>

//Efetua o c�culo da quantidade de litros de combustivel gastos em uma viagem,utilizando-se um automov�l que faz 12 km por L.//
/*@author Guilherme Bezerra */

int main(int argc, char *argv[]){

    float time,vel;
 	float distance;
  
    printf ("\nDigite o tempo gasto :");
    scanf  ("%f" ,&time);
 
    printf ("\nDigite a velocidade media :");	
    scanf  ("%f" ,&vel);
 
// F�rmula  Dist�ncia = tempo x velocidade
	distance = (time*vel)/12;  

	printf ("\nTempo medio gasto : %f\n" ,time); //tempo m�dia 
    printf ("\nVelocidade media : %f\n" ,vel); //velocidade m�dia  
	printf ("\nDistancia percorrida : %f\n" ,distance);  //dist�ncia percorrida
  
    system("PAUSE");	
    return 0;

}
