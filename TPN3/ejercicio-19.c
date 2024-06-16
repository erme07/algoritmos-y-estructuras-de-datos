/*
Enunciado

Crear un programa en c que pida por pantalla un número del 1 al 10 y
mediante una función muestre por pantalla el número escrito en letras.
*/

#include <stdio.h>
#include <stdlib.h>

void mostrarNum(int);

int main(){
	int num;
	do{
		system("cls");
		printf("\n Ingrese un numero del 1 al 10: ");
		scanf("%d",&num);
		if(num<1 || num>10)
			printf("\n ERROR, ingrese un numero valido\n\n");
	}while(num<1 || num>10);
	
	mostrarNum(num);
	system("pause");
	return 0;
}

void mostrarNum(int n){
	switch(n){
		case 1: 
			printf("\n Numero ingresado: Uno\n\n ");
			break;
		case 2: 
			printf("\n Numero ingresado: Dos\n\n ");
			break;
		case 3: 
			printf("\n Numero ingresado: Tres\n\n ");
			break;
		case 4: 
			printf("\n Numero ingresado: Cuatro\n\n ");
			break;
		case 5: 
			printf("\n Numero ingresado: Cinco\n\n ");
			break;
		case 6: 
			printf("\n Numero ingresado: Seis\n\n ");
			break;
		case 7: 
			printf("\n Numero ingresado: Siete\n\n ");
			break;
		case 8: 
			printf("\n Numero ingresado: Ocho\n\n ");
			break;
		case 9: 
			printf("\n Numero ingresado: Nueve\n\n ");
			break;
		case 10: 
			printf("\n Numero ingresado: Diez\n\n ");
			break;
	}
}
