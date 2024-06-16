/*
ENUNCIADO

REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO
UTILIZANDO FUNCIONES.
*/

#include <stdio.h>
#include <stdlib.h>

void esPar(int);

int main(){
	int num;
	char respuesta;
	do{
		system("cls");
		printf(" Verificador de paridad\n\n");
		printf(" Ingrese un numero: ");
		scanf("%d",&num);
		esPar(num);
		
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
