/*
ENUNCIADO

REALIZAR FUNCI�N QUE TOME DOS N�MEROS REALES COMO PAR�METROS Y DEVUELVA UN
N�MERO REAL QUE SER�A LA MEDIA DE LOS DOS N�MEROS.
*/

#include <stdio.h>
#include <stdlib.h>

float calcMedia(float,float);

int main(){
	float num1,num2,media;
	printf("\n Calculadora de promedio\n\n");
	printf(" Ingrese el primer numero: ");
	scanf("%f",&num1);
	printf(" Ingrese el segundo numero: ");
	scanf("%f",&num2);
	media = calcMedia(num1,num2);
	printf("\n La media de los dos numeros es: %.2f\n\n ",media);
	system("pause");
	return 0;
}

float calcMedia(float n1,float n2){
	return (n1+n2) / 2;
}
