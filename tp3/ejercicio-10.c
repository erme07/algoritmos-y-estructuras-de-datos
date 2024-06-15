/*
Enunciado

Crear un programa para calcular el salario semanal de unos empleados a los
que se les paga 50 pesos por hora si éstas no superan las 35 horas. cada hora por
encima de 35 se considerará extra y se paga a 75 pesos.
el programa pide las horas del trabajador y devuelve el salario que se le debe
pagar.
Además el programa debe preguntar si deseamos calcular otro salario, si es así
el programa se vuelve a repetir
Efectuar el ejercicio con una función que calcule el salario.
*/

#include <stdio.h>
#include <stdlib.h>

int calcularSalario(int);

int main(){
	char respuesta;
	int horas,salario;
	
	do{
		system("cls");
		printf("\n Ingrese las horas trabajadas: ");
		scanf("%d",&horas);
		salario = calcularSalario(horas);
		printf("\n El salario semanal del empleado es: $%d\n\n",salario);
		printf(" Calcular otro salario? (s=si  n=no): ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');
	return 0;
}

int calcularSalario(int horas){
	int salario;
	if(horas>35)
		salario = (horas-35)*75 + 1750; // 35*50=1750 
	else
		salario = horas*50;
	return salario;
}
