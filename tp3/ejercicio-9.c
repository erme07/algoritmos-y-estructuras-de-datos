/*
Enunciado

Dada la cantidad de horas trabajadas, la antigüedad, y la categoría del empleado.

	a. sabiendo que cobra 50 pesos por cada año trabajado y que el valor de la hora 
	   según la categoría: cat 1= 10, cat 2= 20, cat 3= 25, cat 4=30.
	b. determinar sueldo del empleado.
	c. informar si el sueldo supera los 1000 pesos.
	
Efectuar el ejercicio con al menos 2 funciones: una para calcular el cobro por
antigüedad y otra para calcular el cobro por horas.

*/

#include <stdio.h>
#include <stdlib.h>

int calcularSueldo(int,int,int);
int cobroAntiguedad(int);
int cobroPorHoras(int,int);

int main(){
	int horas,antiguedad,cat,sueldo;
	printf("\n Ingrese la cantidad de horas trabajadas: ");
	scanf("%d",&horas);
	printf(" Ingrese la antiguedad en a%cos: ",164);
	scanf("%d",&antiguedad);
	printf("\n Categorias\n\n");
	printf(" [1] Categoria 1\n [2] Categoria 2\n [3] Categoria 3\n [4] Categoria 4\n\n");
	printf(" Ingrese la categoria del empleado: ");
	scanf("%d",&cat);
	
	sueldo = calcularSueldo(horas,antiguedad,cat);
	printf("\n El sueldo del empleado es: $%d\n\n",sueldo);
	if(sueldo>1000)
		printf(" El sueldo supera los $1000\n\n");
	system("pause");
	return 0;
}

int cobroAntiguedad(int antig){
	return antig*50;
}

int cobroPorHoras(int horas,int cat){
	switch(cat){
		case 1: return horas*10;
		case 2: return horas*20;
		case 3: return horas*25;
		case 4: return horas*30;
	}
}

int calcularSueldo(int horas, int antig, int cat){
	int sueldo;
	sueldo = cobroAntiguedad(antig) + cobroPorHoras(horas,cat);
	return sueldo;
}
