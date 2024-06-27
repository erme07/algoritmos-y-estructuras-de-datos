/*
Enunciado
 
Escribir un programa que lea exactamente 3 números y luego
escriba la suma de todos ellos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1,n2,n3,suma;
	printf(" Ingrese el primer numero: ");
	scanf("%d",&n1);
	printf(" Ingrese el segundo numero: ");
	scanf("%d",&n2);
	printf(" Ingrese el tercer numero: ");
	scanf("%d",&n3);
	suma = n1 + n2 + n3;
	printf("\n La suma es: %d\n\n ",suma);
	system("pause");
	return 0;
}

