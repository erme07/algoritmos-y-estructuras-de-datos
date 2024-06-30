#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcularImporte(int, int, char);
void mostrarImporte(int);
void mostrarVuelto(int);
int contAutoPico(int, char[], char);

int main(){
	char categoria[12],horario,respuesta;
	int dia,importe,pago,vuelto,contAutoP=0,contPases=0,recaudacion=0;
	do{
		system("cls");
		printf("\n ingrese la categoria del vehiculo: ");
		fflush(stdin);
		gets(categoria);
		printf("\n Dias de la semana\n");
		printf(" -----------------\n\n");
		printf(" [1] Lunes\n [2] Martes\n [3] Miercoles\n [4] Jueves\n [5] Viernes\n [6] Sabado\n [7] Domingo\n\n");
		printf(" Ingrese el dia de la semana: ");
		scanf("%d",&dia);
		printf("\n Horarios\n");
		printf(" --------\n\n");
		printf(" p = pico\n n = no pico\n\n");
		printf(" Ingrese el horario: ");
		fflush(stdin);
		scanf("%c",&horario);
		
		if(strcmp(categoria, "moto") == 0)
			importe = calcularImporte(5,dia,horario);
		else if(strcmp(categoria, "auto") == 0){
			importe = calcularImporte(10,dia,horario);
			contAutoP = contAutoPico(contAutoP,categoria,horario);
		}	
		else if(strcmp(categoria, "camioneta") == 0)
			importe = calcularImporte(15,dia,horario);
		else if(strcmp(categoria, "camion") == 0)
			importe = calcularImporte(20,dia,horario);
			
		
		mostrarImporte(importe);
		printf("\n El cliente paga con: $");
		scanf("%d",&pago);
		vuelto = calcularVuelto(importe,pago);
		mostrarVuelto(vuelto);
		
		contPases++;
		recaudacion += importe;
		printf("\n Continuar vendiendo? s/n: ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');
	system("cls");
	printf("\n Cantidad de ventas de \"auto\" en horario pico: %d",contAutoP);
	printf("\n Total de pases vendidos: %d",contPases);
	printf("\n Total recaudado: %d\n",recaudacion);
	return 0;
}

int calcularImporte(int base, int dia, char horario){
	int monto;
	if(dia > 0 && dia < 6){
		if(horario == 'p')
			monto = (base + (base * 0.2));
		else
			monto = (base - (base * 0.2));
	}else
		monto = (base - (base * 0.2));	
	return monto;
}

int calcularVuelto(int importe, int pago){
	return pago - importe;
}

void mostrarImporte(int importe){
	system("cls");
	printf("\n Importe a pagar: $%d\n",importe);
}

void mostrarVuelto(int vuelto){
	system("cls");
	printf("\n El vuelto es: $%d\n",vuelto);
}

int contAutoPico(int cont, char cat[], char hor){
	if(hor == 'p' && strcmp(cat, "auto") == 0){
		cont++;
	}
	return cont;
}
