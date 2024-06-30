#include <stdio.h>
#include <stdlib.h>

#define N 3

int hayStock(int[],int);
void sinStock(int);
void descontarStock(int[],int[]);
int valorVenta(int[],int[]);
void mostrarImporte(int);

int main(){
	char rta;
	int stock[N]={80,80,80},pedidos[N]={0,0,0},eleccion;
	int contip1=0,importe,recaudacion=0,valido;
	do{
		pedidos[0]=0;
		pedidos[1]=0;
		pedidos[2]=0;
		do{
			system("cls");
			printf(" OPCIONES\n\n");
			printf(" [1] IP MAN 1\n [2] IP MAN2\n [3] IPMAN 3\n\n");
			printf(" Seleccione la pelicula: ");
			scanf("%d",&eleccion);
			
			valido = hayStock(stock,eleccion);
			
			if(pedidos[eleccion-1]==1){
				printf("\n Solo puede llevar una de cada pelicula\n");
			}else if(valido==1){
				pedidos[eleccion-1]=1;
			}else{
				sinStock(eleccion);
			}
			if(pedidos[0] == 0 || pedidos[1] == 0 || pedidos[2] == 0){
				printf("\n lleva otra pelicula? (s/n): ");
				fflush(stdin);
				scanf(" %c",&rta);	
			}else
				rta = 'n';
			
		}while(rta=='s');
		
		if(pedidos[0]==1)
			contip1++;
		descontarStock(stock,pedidos);
		importe = valorVenta(stock, pedidos);
		recaudacion+=importe;
		mostrarImporte(importe);
		
		printf(" Continuar vendiendo? (s/n): ");
		scanf(" %c",&rta);
	}while(rta=='s');
	system("cls");
	printf(" Cantidad de unidades vendidas de IP MAN 1: %d\n",contip1);
	printf(" Recaudacion total: %d\n\n ",recaudacion);
	system("pause");
	return 0;
}

int hayStock(int vec[],int peli){
	if(vec[peli-1]>0)
		return 1;
	else
		return 0;
}

void sinStock(int peli){
	printf(" Sin stock de IP MAN %d\n",peli+1);
}

void descontarStock(int vec[],int ped[]){
	int i;
	for(i=0;i<N;i++){
		if(ped[i]==1)
			vec[i]--;
	}
}

int valorVenta(int vec[],int ped[]){
	int i,cont=0;
	if(ped[0]==1 && ped[1]==1 && ped[2]==1)
		return 600;
	else{
		for(i=0;i<N;i++){
			if(ped[i]==1)
				cont++;
		}
		return cont*250;
	}
}

void mostrarImporte(int importe){
	system("cls");
	printf(" Valor a pagar: $%d\n\n ",importe);
	system("pause");
	system("cls");
}
