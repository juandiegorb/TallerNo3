/*
*Programa: Calcular la mitad de un numero siempre y cuando el numero ingresado sea distinto de 0 y 1
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	float num;
	
	printf("Introduzca un numero real: ");
	scanf("%f", &num);
	
	while(num != 0 && num != 1){
		printf("La mitad de %.2f es: %.2f\n", num, num/2);
		printf("Introduzca otro numero real: ");
		scanf("%f", &num);
	}
	return 0;
}

