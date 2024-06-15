/*
Enunciado

Dado un vector con 5 notas de alumnos. Determinar cuántas notas son mayores a 6
*/

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
	int vector[N],i,cont=0;
	
	for(i=0;i<N;i++){
		printf("\n Ingrese la nota del alumno: ");
		scanf("%d", &vector[i]);
	}
	for(i=0;i<N;i++){
		if(vector[i]>6)
			cont++;
	}
	printf("\n Cantidad de notas mayores a 6: %d",cont);
	system("pause");
	return 0;
}

