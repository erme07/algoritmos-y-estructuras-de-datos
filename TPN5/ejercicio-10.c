/*
Enunciado

Escribir una función llamada "cantidad" que reciba como parámetros
un número entero y una cadena y que luego diga si la cadena tiene la
misma cantidad de letras que el número entero ingresado.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 21

void cantidad(int, char[]);

int main(){
	char palabra[N];
	int num;
	printf("\n Ingrese una palabra de maximo 20 caracteres: ");
	scanf("%20s",palabra);
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	
	cantidad(num,palabra);
	system("pause");
	return 0;
}

void cantidad(int num, char cad[]){
	int i=0;
	while(cad[i]!='\0')
		i++;
	if(num==i)
		printf("\n La cantidad de letras coincide con el numero ingresado\n\n ");
	else
		printf("\n La cantidad de letras no coincide con el numero ingresado\n\n ");
}

