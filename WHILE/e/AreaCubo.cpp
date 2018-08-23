/*
*Programa:  Calcula area de un cubo, mientras sus lados sean diferentes de 0
*Fecha: 22 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	float lado, area;
	
	printf("Ingrese cuanto mide el lado del cubo: ");
	scanf("%f", &lado);
	while(lado != 0){
		area = 6 * (lado * lado);
		printf("El area del cubo es: %.2f\n", area);	
		
		printf("Ingrese cuanto mide el lado del cubo: ");
		scanf("%f", &lado);
	}
	
	return 0;
}

