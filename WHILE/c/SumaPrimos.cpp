/*
*Programa:  Sumar los primeros numeros primos del 1 al 50
*Fecha: 22 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int i = 1, suma = 0, contador = 0, j;
	
	while(i <= 50){
		contador = 0;
		// Ciclo para ver cuantos numeros al dividir dan modulo 0
		for(j = 1; j <= i; j++){
			if(i % j == 0){
				contador++;				
			}
		}		
		// Contador para verificar si tiene mas de dos multiplicadores		
		if(contador == 2){
			printf("%d\n", i);
			suma = suma + i;
		}			
		i++;
	}
	printf("La suma de los numeros primos es: %d", suma);	
	return 0;
}

