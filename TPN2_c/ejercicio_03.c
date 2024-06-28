/*
Enunciado

leer tres nUmeros y mostrar un mensaje si se encuentran en orden 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;

    printf(" Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf(" Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf(" Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if (num1 < num2 && num2 < num3)
        printf(" Los numeros se encuentran en orden ascendente\n\n ");
    else 
        printf(" Los numeros no estan en orden ascendente\n\n ");
    
    system("pause");
    return 0;
}