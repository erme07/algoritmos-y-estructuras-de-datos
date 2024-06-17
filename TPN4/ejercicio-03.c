/*
Enunciado

Lea 10 números por teclado, almacénelos en un array y muestre la suma, resta,
multiplicación y división de todos.

(Se omite la division, el ejercicio no especifica el metodo)
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
	int vector[N],suma,resta,multi,i;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero para la posicion [%d]: ",i);
		scanf("%d",&vector[i]);
	}
	//suma - resta - multiplicacion
	suma = vector[0];
	resta = vector[0];
	multi = vector[0];
	for(i=1;i<N;i++){
		suma += vector[i];
		resta -= vector[i];
		multi *= vector[i];
	}
	
	printf("\n Suma: %d\n Resta: %d\n Multiplicacion: %d\n\n ",suma,resta,multi);
	system("pause");
	return 0;
}

