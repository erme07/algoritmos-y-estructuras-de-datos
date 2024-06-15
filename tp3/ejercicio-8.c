/*
Enunciado

realizar una función que reciba un número, muestre los 5 números anteriores
y los 5 números siguientes al número ingresado.
*/

#include <stdio.h>
#include <stdlib.h>

void numerosContiguos(int);

int main(){
	int num;
	printf("\n Ingrese un numero: ");
	scanf("%d",&num);
	numerosContiguos(num);
	system("pause");
	return 0;
}

void numerosContiguos(int n){
	int i;
	printf("\n Los 5 numeros anteriores a %d son: ",n);
	for(i=1;i<=5;i++)
		printf("%d ",n-i);
	printf("\n Los 5 numeros siguientes a %d son: ",n);
	for(i=1;i<=5;i++)
		printf("%d ",n+i);
	printf("\n\n ");
}
