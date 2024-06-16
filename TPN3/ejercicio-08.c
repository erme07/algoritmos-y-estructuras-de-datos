/*
Enunciado

realizar una funci�n que reciba un n�mero, muestre los 5 n�meros anteriores
y los 5 n�meros siguientes al n�mero ingresado.
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
