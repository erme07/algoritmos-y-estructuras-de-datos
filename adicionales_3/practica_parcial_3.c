#include <stdio.h>
#include <stdlib.h>

#define N 50


int menu(void);
void cargarDatos(int,char,int,int*,char*,int*,int*);
void informarCotizaciones(int*,char*,int*,int);

int main(){
	int tel,vectel[N],zona,veczona[N];
	char tipo,vectipo[N];
	int opcion,posicion=0;
	
	do{
		opcion = menu();
		switch(opcion){
			case 1:
				system("cls");
				printf("\n COTIZAR\n");
				printf(" -------\n");
				printf("\n Ingrese el numero de celular: ");
				scanf("%d",&tel);
				printf("\n Tipo de negocio\n\n");
				printf(" [s] Negocio con salida a la calle\n [l] Local en centro comercial\n");
				printf(" [d] Deposito o galpon\n [o] Oficina en edificio empresarial\n\n");
				printf(" Ingrese el tipo de negocio: ");
				fflush(stdin);
				scanf("%c",&tipo);
				if(tipo == 'd'){
					printf("\n Zonas\n\n");
					printf(" [1] Urbana\t[0] No urbana\n\n");
					printf(" Ingrese la zona: ");
					scanf("%d",&zona);
				}else
					zona=1;
				cargarDatos(tel,tipo,zona,vectel,vectipo,veczona,&posicion);
				break;
			case 2: 
				informarCotizaciones(vectel,vectipo,veczona,posicion);
				break;
			case 3: break;
			default: 
				printf("\n Ingrese una opcion valida!\n\n ");
				system("pause");
		}
	}while(opcion!=3);
	

}

int menu(){
	int opc;
	system("cls");
	printf("\n MENU\n\n");
	printf(" [1] Ingresar Datos de pedidos para cotizar kits de sistema de alarmas\n"),
	printf(" [2] Informar Cotizaciones\n");
	printf(" [3] Salir\n\n");
	printf(" Seleccione una opcion: ");
	scanf("%d",&opc);
	return opc;
}

void cargarDatos(int tel,char tipo,int zona,int *vectel,char *vectipo,int *veczona,int *pos){
	*(vectel+*pos) = tel;
	*(vectipo+*pos) = tipo;
	*(veczona+*pos) = zona;
	(*pos)++;
}


void informarCotizaciones(int*vectel,char*vectipo,int*veczona,int pos){
	int i,contador=0;
	int costo,base,adicional;
	
	system("cls");
	printf("\n COTIZACIONES\n");
	printf(" ------------\n");
	for(i=0;i<pos;i++){
		if(*(vectipo+i)=='s'){
			base = 50000;
			adicional=0;
		}
		else if(*(vectipo+i)=='l'){
			base = 40000;
			adicional=0;
		}
		else if(*(vectipo+i)=='d'){
			base = 80000;
			if(*(veczona+i) == 0){
				adicional = 5000;
				contador++;
			}	
			else
				adicional=0;
		}	
		else if(*(vectipo+i)=='o'){
			base = 30000;
			adicional=0;
		}	
		costo = base + adicional;
		printf("\n Pedido numero: %d\n\n",i+1);
		printf(" Celular: %d\t\tCosto: $%d\n\n",*(vectel+i),costo);
	}
	printf("\n Cantidad de cotizaciones de depósitos/galpones en zona no urbana: %d\n\n ",contador);
	system("pause");
}

