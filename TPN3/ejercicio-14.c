/*
Enunciado

Crear una función que permita calcular el factorial de un número.
*/

#include <stdio.h>
#include <stdlib.h>

int calcFactorial(int);

int main(){
	int num,factorial;
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	factorial = calcFactorial(num);
	printf("\n El factorial de %d es: %d\n\n ",num,factorial);
	system("pause");
	return 0;
}

int calcFactorial(int num){
	int i,factorial=1;
	for(i=1;i<=num;i++){
		factorial*=i;
	}
	return factorial;
}

