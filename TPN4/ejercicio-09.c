/*
Enunciado

Diseñar un programa que cargue un arreglo con veinte valores enteros.
Calcular e informar el promedio de los valores y el producto de los mismos

(ERROR EN EL PDF, EL EJERCICIO 9 Y 10 SON PARTE DEL MISMO)
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
	int i,vector[N],acumulador=0,producto=1;
	float promedio;
	
	//cargo valores al vector
	printf("\n Cargar vector de %d posiciones\n\n",N);
	for(i=0;i<N;i++){
		printf(" Ingrese un numero para la posicion [%d]: ",i);
		scanf("%d",&vector[i]);	
	}
	//calculo el promedio
	for(i=0;i<N;i++)
		acumulador += vector[i];
	promedio = (float)acumulador / N;
	
	//calculo el producto
	for(i=0;i<N;i++)
		producto *= vector[i];	
	
	printf("\n Promedio: %.2f\t\tProducto: %d\n\n",promedio,producto);
	system("pause");
	return 0;
}

