/*
Enunciado

Desarrollar un diagrama de flujo para que pida 2 valores y realiza
el cálculo (a+b)*(a-b).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num_a, num_b, result;

    printf(" Ingrese el valor de a: ");
    scanf("%d", &num_a);
    printf(" Ingrese el valor de b: ");
    scanf("%d", &num_b);

    result = (num_a + num_b) * (num_a - num_b);

    printf(" (a + b) * (a - b) = %d\n\n ", result);
	system("pause");
	return 0;
}

