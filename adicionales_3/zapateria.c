#include <stdio.h>
#include <stdlib.h>

#define ROW 8
#define COL 10

void cargarVenta(int*, int*, int*, int*);

int main(){
	int productosxzona[ROW][COL],factxzona[COL];
	int dia,codigo,zona,importe,i,j;
	char decision;
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			productosxzona[i][j] = 0;
		}
	}
	for(i=0;i<COL;i++){
		factxzona[i]=0;
	}
	
	do{
		system("cls");
		cargarVenta(&importe, &codigo, &zona, &dia);
		productosxzona[codigo-1][zona-1]++;
		factxzona[zona-1]+=importe;
		printf("\n\t Zona\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n Produc.\n");
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				if(j==0)
					printf("\n    %d\t\t",i+1);
				printf("%d\t",productosxzona[i][j]);
			}
		}
		printf("\n\n Zona\tFacturacion total\n\n");
		for(i=0;i<COL;i++){
			printf("  %d\t   %d\n",i+1,factxzona[i]);
		}
		do{
			printf("\n\n Desea seguir cargando ventas? s/n: ");
			fflush(stdin);
			scanf("%c", &decision);
			if(decision!='s' && decision!='n')
				printf("\n ERROR, ingrese una respuesta valida!\n\n");
		}while(decision!='s' && decision!='n');
	}while(decision=='s');
	
	
	//printf("%d %d %d %d",importe,codigo,zona,dia);
	return 0;
}

void cargarVenta(int* importe, int* codigo, int* zona, int* dia){
	printf("\n VENTA\n\n");
	do{
		printf(" Ingrese el importe: $");
		scanf("%d",importe);
		if(*importe<=0)
			printf("\n ERRROR, el importe debe ser mayor a cero\n\n");
	}while(*importe<=0);
	do{
		printf(" Ingrese el codigo de producto: ");
		scanf("%d",codigo);
		if(*codigo<1 || *codigo>8)
			printf("\n ERROR, el codigo debe ser un numero entero de 1 a 8\n\n");
	}while(*codigo<1 || *codigo>8);
	do{
		printf(" Numero de zona: ");
		scanf("%d",zona);
		if(*zona<1 || *zona>8)
			printf("\n ERROR, la zona debe ser un numero entero de 1 a 10\n\n");
	}while(*zona<1 || *zona>10);
	do{
		printf(" Dia del mes: ");
		scanf("%d",dia);
		if(*dia<1 || *dia>31)
			printf("\n ERROR, el dia debe ser un numero entero de 1 a 31");
	}while(*dia<1 || *dia>31);
}
