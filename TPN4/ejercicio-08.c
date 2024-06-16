/*
Enunciado

Dado un vector de 10 elementos determinar el máximo y el mínimo y en qué posición se
encuentran.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
	int vector[N],i;
	int max,min,posmax=0,posmin=0;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	max=vector[0];
	min=vector[0];
	for(i=0;i<N;i++){
		if(vector[i]<min){
			min = vector[i];
			posmin = i;
		}
		if(vector[i]>max){
			max = vector[i];
			posmax = i;
		}
	}
	printf("\n El valor maximo es: %d posicion [%d]",max,posmax);
	printf("\n El valor minimo es: %d posicion [%d]\n\n ",min,posmin);
	system("pause");
	return 0;
}

