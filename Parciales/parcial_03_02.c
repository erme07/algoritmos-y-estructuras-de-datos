
//EJERCICIO 2

#include <stdio.h>
#include <stdlib.h>

#define N 31

int menu();
int validarDia(int *,int,int);
void cargarDatos(int [],int [],int [],int,int,int,int *);
void mostrarReservas(int [],int [],int [],int);

int main(){
	int vectel[N],vecinvitados[N],vecdia[N]={0};
	int tel,dia,invitados;
	int opcion,pos=0;
	
	do{
		opcion = menu();
		
		switch(opcion){
			case 1:
				system("cls");
				do{
					printf("\n Ingrese el telefono: ");
					scanf("%d",&tel);
					if(tel<=0)
						printf("\n  ERROR, debe ser mayor a cero\n\n");	
				}while(tel<=0);
				do{
					printf("\n Ingrese la cantidad de invitados: ");
					scanf("%d",&invitados);
					if(invitados<=0)
						printf("\n  ERROR, debe ser mayor a cero\n\n");	
				}while(invitados<=0);
				do{
					printf("\n Ingrese el dia: ");
					scanf("%d",&dia);
					if(dia<=0 || dia>=31)
						printf("\n  ERROR, debe ser mayor a cero y menor a 32\n\n");	
				}while(dia<=0 || dia>=31);
				if(validarDia(vecdia,dia,pos)==1){
					cargarDatos(vecdia,vecinvitados,vectel,dia,invitados,tel,&pos);
				}
				else{
					printf("\n El dia ya se encuentra reservado\n\n");
					system("pause");
				}
				break;
			case 2: 
				mostrarReservas(vecdia,vecinvitados,vectel,pos);
				break;
		}
		
	}while(opcion!=3);
	return 0;
}

int menu(){
	int opc;
	do{
		system("cls");
		printf("\n MENU\n\n");
		printf(" [1] Registrar una reserva \n");
		printf(" [2] Mostrar las reservas del mes\n");
		printf(" [3] Salir\n");
		printf("\n Elija una opcion: ");
		scanf("%d",&opc);
		if(opc<1 || opc>3)
			printf("\n ERROR, ingrese una opcion valida!\n\n");
	}while(opc<1 || opc>3);
	return opc;
}

int validarDia(int *vecdia,int dia,int pos){
	int i;
	for(i=0;i<pos;i++){
		if(*(vecdia+i)==dia)
			return 0;
	}
	return 1;
	//si esta disponible devuelve 1
}


void cargarDatos(int vecdia[],int vecinvitados[],int vectel[],int dia,int invitados,int tel,int *pos){
	vecdia[*pos] = dia;
	vecinvitados[*pos] = invitados;
	vectel[*pos] = tel;
	(*pos)++;
}

void mostrarReservas(int vecdia[],int vecinvitados[],int vectel[],int pos){
	
	int i;
	system("cls");
	printf("\n Telefono\tInvitados\tDia\n\n");
	for(i=0;i<pos;i++){
		printf(" %d\t\t%d\t\t%d\n",vectel[i],vecinvitados[i],vecdia[i]);
	}
	printf("\n\n ");
	system("pause");
}





