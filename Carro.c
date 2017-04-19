#include <stdio.h>
#include <stdlib.h>

//Efetua o cáculo da quantidade de litros de combustivel gastos em uma viagem,utilizando-se um automovél que faz 12 km por L.//
/*@author Guilherme Bezerra */

int main(int argc, char *argv[]){

    float time,vel;
 	float distance;
  
    printf ("\nDigite o tempo gasto :");
    scanf  ("%f" ,&time);
 
    printf ("\nDigite a velocidade media :");	
    scanf  ("%f" ,&vel);
 
// Fórmula  Distância = tempo x velocidade
	distance = (time*vel)/12;  

	printf ("\nTempo medio gasto : %f\n" ,time); //tempo média 
    printf ("\nVelocidade media : %f\n" ,vel); //velocidade média  
	printf ("\nDistancia percorrida : %f\n" ,distance);  //distância percorrida
  
    system("PAUSE");	
    return 0;

}
