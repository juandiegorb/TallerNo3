/*
*Programa: identificar si es una vocal mayuscula o minuscula
*Fecha: 17 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	char letra;
	printf("Ingrese un caracter: ");
	scanf("%c", &letra);
	if(letra == 'a' || letra == 'e' || 
	   letra == 'i' ||letra == 'o' ||
	   letra == 'u'){
		printf("Es una vocal minuscula");
	}else if(letra == 'A'|| letra == 'E' || 
			 letra == 'I' ||letra == 'O' ||
			 letra == 'U'){
		printf("Es una vocal mayuscula");
	}else{
		printf("La letra ingresada no es una vocal");
	}	
	return 0;
}

