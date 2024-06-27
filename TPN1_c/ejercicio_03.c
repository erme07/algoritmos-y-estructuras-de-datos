/*
Enunciado

Escribir un algoritmo en el cual se ingresan dos variables a y b. realice la
suma, la resta, la división y la multiplicación de a con b. muestre los cuatro
resultados por pantalla. luego intercambie el valor de las dos variables y
mostrar los valores intercambiados.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_a,num_b,suma,resta,multiplicacion,aux;
	float division;
	
    printf(" Ingrese el valor de a: ");
    scanf("%d", &num_a);
    printf(" Ingrese el valor de b: ");
    scanf("%d", &num_b);

    suma = num_a + num_b;
    resta = num_a - num_b;
    division = (float)num_a / (float)num_b;
    multiplicacion = num_a * num_b;

    printf(" a + b = %d\n", suma);
    printf(" a - b = %d\n", resta);
    printf(" a / b = %.2f\n", division);
    printf(" a * b = %d\n", multiplicacion);

    aux = num_a;
    num_a = num_b;
    num_b = aux;

    printf(" Nuevo valor de a: %d\n", num_a);
    printf(" Nuevo valor de b: %d\n\n ", num_b);
	system("pause");
	return 0;
}

