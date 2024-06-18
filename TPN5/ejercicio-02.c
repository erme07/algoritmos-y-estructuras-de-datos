/*
Enunciado

Escribir un programa en c que permita ingresar las tres notas de un
alumno, calcular el promedio e informe si esta aprobado o
desaprobado. el promedio deberá calcularse en la función promedio(),
que recibirá por referencia las notas y deberá retornar el valor del
promedio para evaluar la condición en el cuerpo principal.
*/

#include <stdio.h>
#include <stdlib.h>

float promedio(float*, float*, float*);

int main(){
	float nota1,nota2,nota3,prom;
	
	printf("\n Ingrese la primera nota: ");
	scanf("%f",&nota1);
	printf(" Ingrese la segunda nota: ");
	scanf("%f",&nota2);
	printf(" Ingrese la tercera nota: ");
	scanf("%f",&nota3);
	prom = promedio(&nota1,&nota2,&nota3);
	if(prom < 7)
		printf("\n Promedio: %.2f  DESAPROBADO\n\n ", prom);
	else
		printf("\n Promedio: %.2f  APROBADO\n\n ", prom);
	
	system("pause");
	return 0;
}

float promedio(float *nota1, float *nota2, float *nota3){
	float prom;
	prom = (*nota1 + *nota2 + *nota3) / 3;
	return prom;
}
