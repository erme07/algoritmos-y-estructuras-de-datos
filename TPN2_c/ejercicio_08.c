/*
Enunciado

Realizar un programa que pida el ingreso de 2 números y la operación a realizar
entre ellos y muestre el resultado de la operación
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, resultado;
    char operacion;

    printf("Ingrese el primer numero (a): ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero (b): ");
    scanf("%f", &b);
    printf("Operaciones:\n");
    printf("s = suma\n");
    printf("r = resta\n");
    printf("m = multiplicacion\n");
    printf("d = division\n");
    printf("Elija una operacion: ");
    scanf(" %c", &operacion);

    switch (operacion) {
        case 's':
            resultado = a + b;
            printf("a + b = %.2f\n", resultado);
            break;
        case 'r':
            resultado = a - b;
            printf("a - b = %.2f\n", resultado);
            break;
        case 'm':
            resultado = a * b;
            printf("a * b = %.2f\n", resultado);
            break;
        case 'd':
            if(b != 0) {
                resultado = a / b;
                printf("a / b = %.2f\n", resultado);
            } else {
                printf("Error: Division por cero.\n");
            }
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
    }
    system("pause");
    return 0;
}