/*
Enunciado

Crear una función “escribirtablamultiplicar”, que reciba como parámetro un
número entero, y escriba la tabla de multiplicar de ese número (por ejemplo,
para el 3 deberá llegar desde 3x0=0 hasta 3x10=30).
*/

#include <stdio.h>
#include <stdlib.h>

void escribirtablamultiplicar(int);

int main(){
	int num;
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	escribirtablamultiplicar(num);
	system("pause");
	return 0;
}

void escribirtablamultiplicar(int num){
	int i;
	printf("\n Tabla de multiplicar de %d\n\n ",num);
	for(i=0;i<=10;i++){
		printf("%d X %d = %d\n ",num,i,num*i);
	}
}
