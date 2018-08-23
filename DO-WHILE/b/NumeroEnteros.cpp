/*
*Programa: suma de todos los numeros ingresados hasta que se escriba el 0 usando do-while
*Fecha: 22 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int numero, suma = 0;
	// Inicia el hacer mientras
	do{
		//Ingreso de datos numericos
		printf("Ingrese un numero entero: ");
		scanf("%d", &numero);
		// suma de los numeros
		suma = suma + numero;
	} while(numero != 0);
	//Impresion de resulados
	printf("La suma de todos los numeros es: %d", suma);
	return 0;
}

