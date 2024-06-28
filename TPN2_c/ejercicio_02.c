/*
Enunciado

Dados 2 numeros si el primero es mayor que el segundo restarlos sino
multiplicarlos. informar el resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, resultado;

    printf(" Ingrese el primer numero (a): ");
    scanf("%d", &num1);
    printf(" Ingrese el segundo numero (b): ");
    scanf("%d", &num2);

    if (num1 > num2) {
        resultado = num1 - num2;
        printf(" a - b = %d\n\n ", resultado);
    } else {
        resultado = num1 * num2;
        printf(" a * b = %d\n\n ", resultado);
    }
    system("pause");
    return 0;
}