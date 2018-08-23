/*
*Programa: Mostrar area de 5 circulos 
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	float radio, area;
	int i;
	//Realiza el calculo de 5 radios
	for(i = 1; i<=5 ; i++){
		printf("Ingrese el radio del circulo numero %d: ", i);	
		scanf("%f", &radio);
		area = 3.1416 * (radio * radio);
		printf("El area del circulo numero %d es: %.2f \n", i, area);
	}	
	return 0;
}

