/*
Enunciado

Escribir un programa que cargue 100 números aleatoriamente en un
vector. utilizando la función contar(), indicar cuantos números pares
hay en el vector y cuantos impares.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 100

void contar(int[]);

int main(){
	
	int min = 0, max = 50,i;
	int vector[N],random_num;
	
    srand(time(NULL));

    for(i=0;i<N;i++){
        random_num = min + rand() % (max - min + 1);
        vector[i] = random_num;
    }
    
    printf("\n Vector\n\n");
	for(i=0;i<N;i++){
		printf("[%02d]",vector[i]);
		if((i+1) % 20 == 0)
			printf("\n");
	}
    contar(vector);
    
    system("pause");
	return 0;
}

void contar(int vec[]){
	int i,pares=0,impares=0;
	for(i=0;i<N;i++){
		if(vec[i] %2 == 0)
			pares++;
		else
			impares++;
	}
	printf("\n\n Cantidad numeros pares: %d\n",pares);
	printf("\n Cantidad numeros impares: %d\n\n ",impares);
}

