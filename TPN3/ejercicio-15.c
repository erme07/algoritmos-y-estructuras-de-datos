/*
Enunciado

Crear una función que reciba un número y muestre en pantalla el perímetro y
la superficie de un cuadrado que tenga como lado el número que se ha indicado
como parámetro.

*/

#include <stdio.h>
#include <stdlib.h>

void calcularDatos(int);
void imprimir(int,int);

int main(){
	int lado,superficie,perimetro;
	
	printf("\n Superficie y Perimetro de un cuadrado");
	printf("\n -------------------------------------\n");
	printf("\n Longitud del lado: ");
	scanf("%d", &lado);
	
	calcularDatos(lado);
	system("pause");
	return 0;
}

 void calcularDatos(int num){
	int perimetro,superficie;
	perimetro = num*4;
	superficie = num*num;
	imprimir(perimetro,superficie);
 }


void imprimir(int per,int sup){
	printf("\n Perimetro: %d", per);
	printf("\n Superficie: %d\n\n ", sup);
}
