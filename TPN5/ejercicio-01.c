/*
Enunciado

Escribir un programa en c que reciba dos n�meros del usuario realice
la suma y la muestre por pantalla. la suma deber� hacerse en la
funci�n suma(), que recibir� como par�metros por referencia los num1
y num2. el resultado debe imprimirse desde la funci�n
*/

#include <stdio.h>
#include <stdlib.h>

void suma(int*, int*);

int main(){
	int num1,num2;
	
	printf("\n Ingrese el primer numero: ");
	scanf("%d",&num1);
	printf(" Ingrese el segundo numero: ");
	scanf("%d",&num2);
	
	suma(&num1,&num2);
	
	system("pause");
	return 0;
}
void suma(int *n1, int *n2){
	int sum = *n1 + *n2;
	printf("\n %d + %d = %d\n\n ",*n1,*n2,sum);
}
