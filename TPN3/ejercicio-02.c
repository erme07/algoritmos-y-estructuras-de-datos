
/*
ENUNCIADO

REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR
PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES
*/

#include <stdio.h>
#include <stdlib.h>

void cargarNumeros(void);
void invertir(int,int);

int main(){
	cargarNumeros();
	system("pause");
	return 0;
}

void cargarNumeros(){
	int num1,num2;
	printf("\n Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf(" Ingrese el segundo numero: ");
	scanf("%d",&num2);
	invertir(num1,num2);
}
void invertir(int n1,int n2){
	int aux = n1;
	n1 = n2;
	n2 = aux;
	printf("\n\n Valores intercambiados\n\n");
	printf(" Numero 1: %d\n Numero 2: %d\n",n1,n2);
}
