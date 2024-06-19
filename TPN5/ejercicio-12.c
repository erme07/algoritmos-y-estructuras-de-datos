/*
Enunciado

Realizar una función que tome como parámetro un nombre y devuelva
“hola <nombre>”
*/

#include <stdio.h>
#include <stdlib.h>

void saludar(char[]);

int main(){
	char nombre[21];
	printf("\n Ingrese su nombre: ");
	scanf("%20s",nombre);
	
	saludar(nombre);
	
	system("pause");
	return 0;
}

void saludar(char nombre[]){
	printf("\n \"Hola %s\"\n\n ",nombre);
}
