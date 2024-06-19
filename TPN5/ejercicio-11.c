/*
Enunciado

Escribir una función para transformar un número entero en una
cadena de caracteres formada por los dígitos del número entero. por
ejemplo se ingresa 478 muestra cuatro siete ocho.
*/

#include <stdio.h>
#include <stdlib.h>

int invertirNumero(int);
void numerosEnPalabras(int);

int main(){
	int numero;
    printf("\n Ingrese un numero entero: ");
    scanf("%d", &numero);
    numerosEnPalabras(numero);
	system("pause");
	return 0;
}

int invertirNumero(int num){
    int digito,invertido = 0;
    while (num != 0) {
        digito = num % 10; 
        invertido = invertido * 10 + digito;
        num = num / 10;
    }
    return invertido;
}

void numerosEnPalabras(int num){
    char nombresNumeros[10][30] = {
        "cero", "uno", "dos", "tres", "cuatro", 
        "cinco", "seis", "siete", "ocho", "nueve"
    };
	int i,digito;
	num = invertirNumero(num);
    
    printf("\n El numero escrito es: ");
    for(i=0;num!=0;i++) {
        digito = num%10;
        num /= 10;
        printf("%s ", nombresNumeros[digito]);
    }
    printf("\n\n ");
}


