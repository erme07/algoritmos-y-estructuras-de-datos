/*
Enunciado

Crear una función “esprimo”, que reciba un número y devuelva el valor 1 si es
un número primo o 0 en caso contrario
*/

#include <stdio.h>
#include <stdlib.h>

int esprimo(int);

int main(){
	int num;
	do{
		printf("\n Ingrese un numero: ");
		scanf("%d",&num);
		if(num<=0)
			printf("\n El numero debe ser mayor a cero\n");
	}while(num<=0);
	if(esprimo(num)==1)
		printf("\n El numero %d es primo\n\n ",num);
	else
		printf("\n El numero %d no es primo\n\n ",num);
	system("pause");
	return 0;
}
int esprimo(int num){
	int i,cont=0;
	if(num==1)
		return 0;
	for(i=2;i<num;i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}
