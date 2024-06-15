/*
Enunciado

Realizar una función llamada negativo, que toma un número entero como
parámetro, y devuelve 1 si es negativo o 0 si no lo es.
*/

#include <stdio.h>
#include <stdlib.h>

int negativo(int);

int main(){
	
	int num,res;
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	res = negativo(num);
	
	if(res==1)
		printf("\n El numero es NEGATIVO\n\n ");
	else
		printf("\n El numero es POSITIVO\n\n ");
	system("pause");
	return 0;
}

int negativo(int n){
	if(n<0)
		return 1;
	else
		return 0;
}

