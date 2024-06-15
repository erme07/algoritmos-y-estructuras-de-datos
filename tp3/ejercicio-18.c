/*
Enunciado

Crear un programa en c que muestre un menú con las opciones sumar, restar,
multiplicar y dividir, el programa solicitará una opción y realizará la tarea
elegida.
Se debe usar una función para mostrar el menú, pedir los datos en el
main y después usar funciones para realizar los cálculos.
*/

#include <stdio.h>
#include <stdlib.h>

void menu(void);
float sumar(float,float);
float restar(float,float);
float multiplicar(float,float);
float dividir(float,float);

int main(){
	float num1,num2,resultado;
	int opcion;
	char resp;
	do{
		do{
			menu();
			printf(" Seleccione una de las opciones: ");
			scanf("%d",&opcion);
			if(opcion<1 || opcion>4){
				printf("\n Ingrese una opcion valida\n\n ");
				system("pause");
			}
		}while(opcion<1 || opcion>4);
		printf("\n Ingrese el primer numero: ");
		scanf("%f",&num1);
		do{
			printf(" Ingrese el segundo numero: ");
			scanf("%f",&num2);
			if(num2 == 0 && opcion == 4)
				printf("\n ERROR, el divisor no puede valer cero\n\n");
		}while(num2 == 0 && opcion == 4);
		
		switch(opcion){
			case 1: resultado = sumar(num1,num2); break;
			case 2: resultado = restar(num1,num2); break;
			case 3: resultado = multiplicar(num1,num2); break;
			case 4: resultado = dividir(num1,num2); break;
		}
		printf("\n El resultado es: %.2f\n\n",resultado);
		printf("\n Seguir operando? (s=si  n=no): ");
		fflush(stdin);
		scanf("%c",&resp);
	}while(resp == 's');
	return 0;
}

void menu(){
	system("cls");
	printf("\n MENU\n\n");
	printf(" [1] Sumar\n");
	printf(" [2] Restar\n");
	printf(" [3] Multiplicar\n");
	printf(" [4] Dividir\n\n");
}

float sumar(float n1,float n2){
	return n1+n2;
}
float restar(float n1,float n2){
	return n1-n2;
}
float multiplicar(float n1,float n2){
	return n1*n2;
}
float dividir(float n1,float n2){
	return n1/n2;
}

