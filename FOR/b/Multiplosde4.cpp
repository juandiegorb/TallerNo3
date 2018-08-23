/*
*Programa: numeros multiplos de 4 entre 64 y 4
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int num;
	// ciclo para tomar multiplos de 4
	for(num = 64; num>=4; num-=4){
		printf("%d\n", num);
	}	
	return 0;
}

