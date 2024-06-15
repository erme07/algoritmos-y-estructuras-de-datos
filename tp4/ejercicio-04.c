/*
Enunciado

Escribir un programa que pida 10 números enteros por teclado, los cargue en un vector
y que imprima por pantalla:
	i. Cuántos de esos números son pares.
	ii. Cuál es el valor del número máximo.
	iii. Cuál es el valor del número mínimo. 
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
	int vector[N],i,pares=0,max,min;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	min = vector[0];
	max = vector[0];
	for(i=0;i<N;i++){
		if(vector[i]%2==0)
			pares++;
		if(vector[i]<min)
			min = vector[i];
		if(vector[i]>max)
			max = vector[i];
	}
	printf("\n Cantidad de numeros pares: %d", pares);
	printf("\n Valor de numero minimo: %d", min);
	printf("\n Valor de numero maximo: %d\n ", max);
	system("pause");
	return 0;
}

