/*
Enunciado

Realizar una función llamada letras, que toma una cadena de
caracteres como parámetro, y devuelve un número entero que es el
número de caracteres que tiene dicha cadena.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 26

int letras(char[]);

int main(){
	char palabra[N],num_letras;
	
	printf("\n Ingrese una palabra de maximo 25 caracteres: ");
	scanf("%25s",palabra);
	
	num_letras = letras(palabra);
	
	printf("\n Palabra: %s\n",palabra);
	printf("\n Cantidad de letras: %d\n\n ",num_letras);
	
	system("pause");
	return 0;
}

int letras(char cad[]){
	int i=0;
	while(cad[i]!='\0')
		i++;
	return i;
}
