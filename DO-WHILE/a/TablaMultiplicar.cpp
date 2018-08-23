/*
*Programa: Tabla multiplicar usando do-while
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	char c;
	int i, num;
	// inicia repita mientras para multiplicar
	do{
		printf("Introduzca un numero entero: ");
		scanf("%d", &num);
		printf("\nla tabla de multiplicar del numero %d es: \n\n", num);
		// iniciamos tabla de multiplicar
		for(i = 0; i <= 10 ; i++){
			printf("%d * %d = %d \n", num, i , i * num);
		}
		printf("\ndesea visualizar otra tabla de multiplicar (s/n)?: ");
		fflush(stdin);
		scanf("%c", &c);
		
	} while(c != 'n');
	return 0;
}

