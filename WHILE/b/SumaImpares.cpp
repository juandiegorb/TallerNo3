/*
*Programa:  Sumar los primeros numeros impares del 1 al 50
*Fecha: 22 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int i = 1, suma = 0 ;
	
	while(i <= 50){
		if(i % 2 == 1){
			// Acumulador
			suma = suma + i;
			printf("%d\n", i);
		}
		i++;
	}
	printf("La suma de los impares es: %d", suma);
	
	return 0;
}

