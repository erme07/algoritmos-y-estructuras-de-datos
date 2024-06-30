#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprobarDisponibilidad(int[],int);
int reservarLugar(int[],int[],int[],int,char[]);
void sinLugar(int,char[]);
int generarTicket(int[],int[],int[],int,char[]);
int comprobarDisponibilidad(int[],int);
void cantCampo3(int[]);
int calcularTotal(int[],int[],int[]);

int main(){
	int dia,precio,ticket,flag;
	char ubicacion[4],rta;
	int campo[3]={3500,3500,3500},platea[3]={1000,1000,1000},palco[3]={500,500,500};
	int total;
	
	do{
		do{
			system("cls");
			printf(" RESERVE SU LUGAR\n\n");
			printf(" Dias\n\n");
			printf(" [1] Dia1\n [2] Dia2\n [3] Dia3\n\n");
			printf(" seleccione el dia: ");
			scanf("%d",&dia);
			printf("\n Ubicaciones\n\n");
			printf(" \"cam\" = campo\n \"pla\" = platea\n \"pac\" = palco\n\n");
			printf(" seleccione la ubicacion: ");
			scanf("%s",ubicacion);
			
			if(reservarLugar(palco,platea,campo,dia,ubicacion) == 0){
				sinLugar(dia,ubicacion);
				flag = 1;
			}else
				flag = 0;
			
		}while(flag==1);
		ticket = generarTicket(palco,platea,campo,dia,ubicacion);
		printf("\n Seguir vendiendo entradas? (s/n): ");
		scanf(" %c",&rta);
	}while(rta=='s');
	cantCampo3(campo);
	total = calcularTotal(palco,platea,campo);
	printf(" El total recaudado los tres dias es: %d\n\n ",total);
	system("pause");
	return 0;
}

int comprobarDisponibilidad(int vec[],int dia){
	if(vec[dia-1]>0)
		return 1;
	else 
		return 0;
}

int reservarLugar(int pal[], int pla[],int cam[],int dia,char ubic[]){
	int disponibilidad;
	if(strcmp(ubic,"pac")==0){
		disponibilidad = comprobarDisponibilidad(pal,dia);
		if(disponibilidad==1)
			pal[dia-1] = pal[dia-1] - 1;
	}
	else if(strcmp(ubic,"pla")==0){
		disponibilidad = comprobarDisponibilidad(pla,dia);
		if(disponibilidad==1)
			pla[dia-1] = pla[dia-1] - 1;
	}
	else if(strcmp(ubic,"cam")==0){
		disponibilidad = comprobarDisponibilidad(cam,dia);
		if(disponibilidad==1)
			cam[dia-1] = cam[dia-1] - 1;
	}
	return disponibilidad;
}

void sinLugar(int dia,char ubic[]){
	system("cls");
	printf(" No hay lugares para el dia %d ubicacion %s\n\n ",dia,ubic);
	system("pause");
	system("cls");
}

int generarTicket(int pal[], int pla[],int cam[],int dia,char ubic[]){
	if(strcmp(ubic,"pac")==0){
		return 5000 - pal[dia-1]; 
	}
	if(strcmp(ubic,"pla")==0){
		return 4500 - pla[dia-1];
	}
	if(strcmp(ubic,"cam")==0){
		return 3500 - cam[dia-1];
	}
}

void cantCampo3(int campo[]){
	int cant = 3500 - campo[2];
	system("cls");
	printf(" La cantidad de entradas de campo dia 3 vendidas es: %d\n\n ",cant);
	system("pause");
	system("cls");
}

int calcularTotal(int palco[],int platea[],int campo[]){
	int total=0,i;
	for(i=0;i<3;i++){
		total += (500 - palco[i]) * 120;
		total += (1000 - platea[i]) * 80;
		total += (3500 - campo[i]) * 60;
	}
	return total;
}
