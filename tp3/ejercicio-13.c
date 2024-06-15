/*
Enunciado

Desarrolle un algoritmo que realice la sumatoria de los números enteros
pares comprendidos entre el 1 y el 200, imprima los números y su sumatoria.
Efectuar el ejercicio utilizando una función para determinar si el número es par
o no.
*/

#include <stdio.h>
#include <stdlib.h>

int esPar(int);
void mostrarNumero(int);

int main(){
	int i,sumatoria=0;
	printf("\n Numeros pares entre 1 y 200\n\n");
	for(i=1;i<200;i++){
		if(esPar(i) == 1){
			mostrarNumero(i);
			sumatoria+=i;	
		}
	}
	printf("\n La sumatoria es: %d\n\n ",sumatoria);
	system("pause");
	return 0;
}

void mostrarNumero(int num){
	if(num == 198)
		printf(" %d\n",num);
	else
		printf(" %d -",num);
}

int esPar(int num){
	if(num % 2 == 0)
		return 1;
	else
		return 0;
}

