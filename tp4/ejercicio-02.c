/*
Enunciado

Escribir un programa que lea un vector de 10 elementos. Deberá imprimir el mismo vector
por pantalla pero invertido. 
Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){	
	int vector[N],inverso[N],i;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	//Primer metodo - imprimir el mismo vector pero en orden inverso
	printf("\n Vector original: ");
	for(i=0;i<N;i++)
		printf("%d ",vector[i]);
	printf("\n Vector invertido: ");
	for(i=N-1;i>=0;i--)
		printf("%d ",vector[i]);
	
	//Segundo metodo - crear un segundo vector guardando los datos en orden inverso
	for(i=0;i<N;i++)
		inverso[N-1-i] = vector[i];
	printf("\n\n Vector original: ");
	for(i=0;i<N;i++)
		printf("%d ",vector[i]);
	printf("\n Vector invertido: ");
	for(i=0;i<N;i++)
		printf("%d ",inverso[i]);
	system("pause");
	return 0;
}
