/*
Enunciado

Ingresar 3 números e imprimir el doble, el triple y la mitad de cada uno.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1, num2, num3;
    int doble, triple;
    float mitad;

    printf(" Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf(" Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf(" Ingrese el tercer numero: ");
    scanf("%d", &num3);

    doble = num1 * 2;
    printf("\n El doble del primer numero es: %d\n", doble);
    doble = num2 * 2;
    printf(" El doble del segundo numero es: %d\n", doble);
    doble = num3 * 2;
    printf(" El doble del tercer numero es: %d\n", doble);

    triple = num1 * 3;
    printf("\n El triple del primer numero es: %d\n", triple);
    triple = num2 * 3;
    printf(" El triple del segundo numero es: %d\n", triple);
    triple = num3 * 3;
    printf(" El triple del tercer numero es: %d\n", triple);

    mitad = (float)num1 / 2;
    printf("\n La mitad del primer numero es: %.2f\n", mitad);
    mitad = (float)num2 / 2;
    printf(" La mitad del segundo numero es: %.2f\n", mitad);
    mitad = (float)num3 / 2;
    printf(" La mitad del tercer numero es: %.2f\n\n ", mitad);
	system("pause");
	return 0;
}

