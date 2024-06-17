/*
Enunciado

Una compañía inmobiliaria tiene 25 vendedores. Cada operación que hace un
vendedor se guarda con las siguientes informaciones: número del vendedor (int), nombre
del vendedor (20 char), monto de la venta (float). Estas informaciones se almacenarán
en tres vectores, y se deberá escribir un programa que calcule el total de ventas realizado
por cada uno de los vendedores por separado, expresando el resultado como:


| Numero del vendedor |  Nombre del vendedor  |  Total de ventas |
------------------------------------------------------------------
|                     |                       |                  |
|                     |                       |                  |
|                     |                       |                  |
|                     |                       |                  |

(Se modifico el ejercicio, para que solo se ingrese el numero del emepleado y el monto de la venta)
*/

#include <stdio.h>
#include <stdlib.h>

#define N 25

int main(){
	int num_vendedor,i;
	float monto,montovec[N]={0};
	char respuesta;
	char nombres[N][20]={"alan","ana","ema","luz","axel","ciro","elio","erik","enzo","ivan",
						"gael","ian","iara","adam","ivon","sol","juan","luis","iker","joel",
						"mar","ibai","leo","abel","noe"};
	do{
		system("cls");
		do{
			printf("\n Ingrese el numero de vendedor (1 a 25): ");
			scanf("%d",&num_vendedor);
			if(num_vendedor<1 || num_vendedor>25)
				printf("\n ERROR, ingrese un numero valido\n\n");
		}while(num_vendedor<1 || num_vendedor>25);
		do{
			printf("\n Ingrese el monto de la venta: $");
			scanf("%f",&monto);
			if(monto<=0)
				printf("\n ERROR, el monto debe ser mayor a cero");
		}while(monto<=0);
		
		montovec[num_vendedor-1]+=monto;
		
		printf("\n Seguir registrando ventas? (s=si  n=no): ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta=='s');
	system("cls");
	printf("\n  Numero \t| Nombre \t| Total Ventas \n\n");
	for(i=0;i<N;i++){
		printf("  %02d \t\t| %s \t\t| $%.2f \n",i+1,nombres[i],montovec[i]);
	}
	system("pause");
	return 0;
}

