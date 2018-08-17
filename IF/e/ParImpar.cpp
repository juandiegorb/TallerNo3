/*
*Programa: determinar si el numero es par o impar
*Fecha: 17 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	int valor;
	printf("Ingrese un numero: ");
	scanf("%d", &valor);
	if( valor%2==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	return 0;
}

