/*
Enunciado

Desarrolle un algoritmo que realice la sumatoria de los números enteros
múltiplos de 5, comprendidos entre el 1 y el 100, imprima los números y su
sumatoria.
Efectuar el ejercicio utilizando una función para determinar si el número es
múltiplo de 5 o no.
*/

#include <stdio.h>
#include <stdlib.h>

int sumatoria(void);
int esMultiplo(int);
void mostrarMultiplos(int);

int main(){
	int suma;
	printf("\n Los multiplos de 5 entre 1 y 100 son: \n\n");
	suma = sumatoria();
	printf("\n El valor de la sumatoria es: %d\n\n ", suma);
	system("pause");
	return 0;
}


int sumatoria(){
	int total=0,i;
	for(i=1;i<100;i++){
		if(esMultiplo(i) == 1){
			mostrarMultiplos(i);
			total += i;
		}
	}
	return total;
}

int esMultiplo(int num){
	if(num%5 == 0)
		return 1;
	else
		return 0;
}

void mostrarMultiplos(int num){
	if(num == 95)
		printf(" %d\n",num);
	else
		printf(" %d -",num);
}
