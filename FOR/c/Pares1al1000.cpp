/*
*Programa: Pares entre el 1 y el 1000
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int i;
	// ciclo para tomar multiplos de 4
	for(i = 1; i <= 1000; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}		
	}	
	return 0;
}

