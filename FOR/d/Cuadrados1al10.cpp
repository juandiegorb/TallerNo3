/*
*Programa: Cuadrados de los numeros 1 al 10
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int i, num = 1;
	// ciclo para tomar multiplos de 4
	for(i = 1; i <= 10; i++){
		printf("%d\n", num * num);		
		num = num + 1;
	}	
	return 0;
}

