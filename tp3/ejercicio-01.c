
/*
ENUNCIADO

ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL
NÚMERO BASE Y EL EXPONENTE.
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y
DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.
*/

#include <stdio.h>
#include <stdlib.h>

int calcularPotencia(int, int);

int main(){
	int base,exp,potencia;
	printf("\n Calculadora de potencias\n\n");
	printf(" Ingrese la base: ");
	scanf("%d",&base);
	printf(" Ingrese el exponente: ");
	scanf("%d",&exp);
	potencia = calcularPotencia(base,exp);
	printf("\n %d^%d = %d",base,exp,potencia);
	system("pause");
	return 0;
}

int calcularPotencia(int base, int exp){
	int i, potencia=1;
	
	for(i=0;i<exp;i++)
		potencia *= base;
		
	return potencia;
}

