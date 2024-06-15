/*
Enunciado

Escribir una función llamada "edades" que reciba 2 edades y decir cuál de
ellas es la mayor y cuanto le falta a la menor para llegar a la edad mayor.
*/

#include <stdio.h>
#include <stdlib.h>

void edades(int,int);
void diferencia(int,int);

int main(){
	int edad1,edad2;
	char resp;
	do{
		system("cls");
		printf("\n Ingrese la primer edad: ");
		scanf("%d", &edad1);
		printf("\n Ingrese la segunda edad: ");
		scanf("%d", &edad2);
		
		edades(edad1,edad2);
		
		printf("\n Seguir comparando edades? (s=si  n=no): ");
		fflush(stdin);
		scanf("%c",&resp);
	}while(resp == 's');
	return 0;
}

void edades(int ed1,int ed2){
	if(ed1 > ed2)
		printf("\n La primer edad es mayor\n");
	else if(ed1 < ed2)
		printf("\n La segunda edad es mayor\n");
	else
		printf("\n las edades son iguales\n");
	diferencia(ed1,ed2);
}

void diferencia(int ed1, int ed2){
	int dif;
	dif = abs(ed1 - ed2);
	printf("\n La diferencia entre la menor y mayor edad es: %d a%co/s\n",dif,164);
}
