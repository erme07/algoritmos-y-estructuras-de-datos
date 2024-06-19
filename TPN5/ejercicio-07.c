/*
Enunciado

Un minisupermercado cuenta con dos cajeras, cada d�a se guarda el
total que cada una de las cajeras recaudo. al final de la semana, se
realiza la suma del total de ventas de cada cajera y a la que mayor
recaudaci�n tiene se le da un premio. adem�s, el gerente desea conocer
el d�a de menor venta de cada cajera. escribir un programa que permita
ingresar la recaudaci�n diaria de cada cajera, utilizando dos vectores
para ellos (cargados desde una funci�n) y luego crear una funci�n que
permita determinar cu�l es la cajera que recibir� el premio, y una
tercer funci�n que imprima el d�a de menor venta de cada cajera.
*/

#include<stdio.h>
#include<stdlib.h>

#define D 7

void cargaVector(int[]); 
int asignarPremio(int[],int[]);
void encontrarMin(int[]);


int main(){
	int cajera1[D],cajera2[D],ganadora;
	
	printf("\n Carga cajera 1\n\n");
	cargaVector(cajera1); 
	printf("\n Carga cajera 2\n\n");
	cargaVector(cajera2);
	
	ganadora = asignarPremio(cajera1, cajera2);
	printf("\n Cajera que recibira premio:  Cajera %d\n", ganadora);
	
	printf("\n Dia de menor venta cajera 1: ");
	encontrarMin(cajera1);
	
	printf("\n Dia de menor venta cajera 2: ");
	encontrarMin(cajera2);
	
	printf("\n\n ");                             
	system("pause");
	return 0;
}


void cargaVector(int vec[]){
	int i;
    for(i=0;i<D;i++){
    	printf(" Ingrese monto recaudado del dia %d del vector: ", i+1); 
	 	scanf("%d", &vec[i]);   
	} 
}

int asignarPremio( int vec1[], int vec2[]){
	int cant1=0, cant2=0, i;      
    for(i=0;i<D;i++)
		cant1 += vec1[i];
    for(i=0;i<D;i++)
		cant2 += vec2[i];
    if(cant1 > cant2)
		return 1;
	else 
		return 2;
}

void encontrarMin(int vec[]){
    int i, posmin, min;
    min = vec[0];
    posmin=0;
    for(i=0;i<D;i++){
        if(vec[i]<min){
			min = vec[i];
			posmin = i;
		} 
    } 
    printf("Dia %d", posmin+1);
}
