#include <stdio.h>
#include <stdlib.h>

#define LARGO 500
#define ALTO 250
#define N 50

int menu();
void ingresarDatos(int, int, int*, int*, int);
void evaluarHabilidades(int[], int[], int);

int main(){
	int coordX,coordY,vecX[N],vecY[N];
	int opcion,posVec=0;
	
	do{
		opcion = menu();
		switch(opcion){
			case 1: 
				printf("\n ARQUERO ROBOT\n\n");
				printf(" Ingrese la coordenada en X: ");
				scanf("%d",&coordX);
				printf(" Ingrese la coordenada en Y: ");
				scanf("%d",&coordY);
				ingresarDatos(coordX,coordY,vecX,vecY,posVec);
				posVec++;
				break;
			case 2: 
				evaluarHabilidades(vecX,vecY,posVec);
				break;
			case 3: 
				break;
			default: 
				printf("\n Ingrese una opcion valida!\n\n ");
				system("pause");
		}	
	}while(opcion!=3);
	return 0;
}


int menu(){
	int opc;
	system("cls");
	printf("\n MENU\n\n");
	printf(" [1] Ingresar datos de tiro al arco\n");
	printf(" [2] Evaluar las habilidades del arquero robot\n");
	printf(" [3] Salir\n\n");
	printf(" Seleccione una opcion: ");
	scanf("%d",&opc);
	return opc;
}

void ingresarDatos(int x, int y, int *vx, int *vy, int i){
	*(vx+i) = x;
	*(vy+i) = y;
}

void evaluarHabilidades(int vx[], int vy[], int i){
	int j,goles=0,fallos=0;
	system("cls");
	printf("\n Evaluando Arquero Robot\n\n");
	for(j=0;j<i;j++){
		printf(" Coordenada X: %d\tCoordenada Y: %d\t",*(vx+j),*(vy+j));
		if((*(vx+j)<LARGO && *(vx+j) >0) && (*(vy+j)<ALTO && *(vy+j)>0)){
			printf("Resultado: GOL\n");
			goles++;
		}	
		else{
			printf("Resultado: FUERA\n");
			fallos++;
		}	
	}
	printf("\n Cantidad de goles: %d\tCantidad de fallos: %d\n\n ",goles,fallos);
	system("pause");
}

