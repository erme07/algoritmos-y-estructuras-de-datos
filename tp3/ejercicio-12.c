/*
Enunciado

Desarrolle un algoritmo que permita leer un valor cualquier n y escriba si
dicho número es par o impar.
Efectuar el ejercicio utilizando una función para determinar si el número es par
o no.
*/

#include <stdio.h>
#include <stdlib.h>

void esPar(int);

int main(){
	int n;
	char respuesta;
	do{
		system("cls");
		printf(" Verificador de paridad\n\n");
		printf(" Ingrese un numero: ");
		scanf("%d",&n);
		esPar(n);
		
		printf("\n Verificar otro numero? (s=si n=no): ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');
	system("pause");
	return 0;
}

void esPar(int num){
	if(num % 2 == 0)
		printf("\n El numero es PAR\n");
	else
		printf("\n El numero es IMPAR\n");
}
