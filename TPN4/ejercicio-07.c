/*
Enunciado

Dado un vector de 20 números. Hallar el promedio de los elementos positivos y el
porcentaje de los negativos.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
	int vector[N],i;
	int contprom=0,contporc=0,sumatoria=0;
	float promedio,porcentaje;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	for(i=0;i<N;i++){
		if(vector[i]>0){
			sumatoria += vector[i]; 
			contprom++;
		}else if(vector[i]<0)
			contporc++;
	}
	promedio = (float)sumatoria / (float)contprom;
	porcentaje = ((float)contporc / N) * 100;
	
	printf("\n El promedio de los numeros positivos es: %.2f",promedio);
	printf("\n El porentaje de numeros negativos es: %.2f%%\n\n ",porcentaje);
	system("pause");
	return 0;
}

