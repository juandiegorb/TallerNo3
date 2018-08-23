/*
*Programa: mostrar en pantalla numero * numero - numero = resultado usando do-while
*Fecha: 22 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	int numero, resultado, contador = 0,suma = 0;
	char c;
	// Inicia el hacer mientras
	do{
		printf("Ingrese un numero entero: ");
		scanf("%d", &numero);
		// contador de numeros ingresados
		contador++;		
		resultado = numero * numero - numero;
		// suma total de los resultados
		suma = suma + resultado;
		printf("%d * %d - %d = %d\n", numero, numero, numero, resultado);
		
		printf("Desea introducir otro numero o no (s/n)?: ");
		fflush(stdin);
		scanf("%c", &c);			
	} while(c != 'n');
	printf("La cantidad de numeros ingresados es: %d\n", contador);
	printf("La suma de los resultados es: %d", suma);	
	return 0;
}

