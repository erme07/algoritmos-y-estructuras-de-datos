#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int calcMax(int[], int[]);
int calcMin(int[], int[]);
void mostrarListado(int[], int[]);
void mostrarMaxMin(int, int);

int main(){
	int codigos[5],cantidades[]={0,0,0,0,0},i,j,pos;
	int codigo,cantidad,aux,flag = FALSE;
	int cod_masvend,cod_menosvend;
	
	printf("\n REGISTRO DE PRODUCTOS\n");
	printf(" ---------------------\n");
	for(i=0;i<5;i++){
		do{
			flag = FALSE;
			printf("\n Ingrese el codigo del producto %d: ",i+1);
			scanf("%d",&aux);
			if(aux <1000 || aux > 9999)
				printf("\n ERROR Codigo no valido\n");
			else{
				for(j=i;j>=0;j--){
					if(codigos[j]==aux)
						flag = TRUE;
				}
				if(flag == TRUE){
					printf("\n ERROR EL codigo ingresado ya existe\n");
				}
			}
		}while(aux <1000 || aux > 9999 || flag == TRUE);
		codigos[i] = aux;
	}
	
	
	printf("\n\n PEDIDOS DIARIOS\n");
	printf(" ---------------\n");
	do{	
		do{	
			flag = FALSE;
			printf("\n Ingrese el codigo de producto (0 para salir): ");
			scanf("%d",&codigo);
			if(codigo!=0){
				for(i=0;i<5;i++){
					if(codigos[i] == codigo){
						pos=i;
						flag = TRUE;
					}	
				}
				if(flag==FALSE)
					printf("\n ERROR El codigo ingresado no existe o no es valido\n\n");	
			}else
				flag=TRUE;
		}while(flag == FALSE);
		
		if(codigo!=0){
			do{
				printf("\n Ingrese la cantidad de unidades solicitadas: ");
				scanf("%d",&cantidad);
				cantidades[pos] += cantidad;
				if(cantidad<=0)
					printf("\n ERROR La cantidad debe ser mayor a cero\n");
			}while(cantidad<=0);
		}	
	}while(codigo!=0);
	
	mostrarListado(codigos, cantidades);
	
	cod_masvend = calcMax(codigos, cantidades);
	cod_menosvend = calcMin(codigos, cantidades);
	mostrarMaxMin(cod_masvend,cod_menosvend);
	 
	return 0;
}

void mostrarMaxMin(int codmax,int codmin){
	printf("\n\n");
	printf(" Mas vendido\t\tMenos vendido\n");
	printf(" -----------\t\t-------------\n\n");
	printf(" codigo: %d\t\tcodigo: %d\n\n",codmax,codmin);
}

void mostrarListado(int cod[],int cant[]){
	int i;
	system("cls");
	printf("\n Cantidades solicitadas por producto\n");
	printf(" -----------------------------------\n");
	for(i=0;i<5;i++)
		printf("\n codigo: %d\tcantidad: %d",cod[i],cant[i]);
	printf("\n");
}

int calcMax(int cod[], int cant[]){
	int maxcant,posmax=0,i;
	maxcant = cant[0];
	for(i=0;i<5;i++){
		if(maxcant<cant[i]){
			maxcant=cant[i];
			posmax=i;
		}	
	}
	return cod[posmax];
}

int calcMin(int cod[], int cant[]){
	int mincant,posmin=0,i;
	mincant = cant[0];
	for(i=0;i<5;i++){
		if(mincant>cant[i]){
			mincant=cant[i];
			posmin=i;
		}	
	}
	return cod[posmin];
}
