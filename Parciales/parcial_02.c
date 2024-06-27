#include <stdio.h>
#include <string.h>

void ingresar(void);
float calcularLitros(float, char);
float calcularVuelto(float,float);
void mostrar(float,float,float,float,float,float,float,char,char);

int main(){
	int flag=0;
	char tipo,medioPago,maxlitrosTipo,maxlitrosMedio,rta;
	float carga,litros,pago,vuelto,maxlitros;
	float litrosN=0,litrosD=0,recaudadoE=0,recaudadoB=0,recaudadoT=0,recaudadoD=0;
	
	ingresar();
	
	do{
		do{
			system("cls");
			printf("\n TIPOS DE COMBUSTIBLE\n");
			printf(" --------------------\n\n");
			printf(" [n]  Nafta Premium\n [d]  Diesel Premium\n\n");
			printf(" Ingrese el tipo de combustible: ");
			fflush(stdin);
			scanf("%c",&tipo);
			if(tipo !='n' && tipo != 'd'){
				system("cls");
				printf("\n ERROR Ingrese una opcion valida\n\n ");
				system("pause");
			}
		}while(tipo !='n' && tipo != 'd');
		
		do{
			printf("\n Ingrese el valor de la carga: ");
			scanf("%f",&carga);
			if(carga <= 0){
				printf("\n ERROR El valor debe ser mayor a cero\n");
			}
		}while(carga<=0);
		
		do{
			printf("\n MEDIOS DE PAGO\n");
			printf(" --------------\n\n");
			printf(" [e] Efectivo\n [t] Tarjeta de credito\n [d] Debito\n [b] Billetera virtual\n\n");
			printf("\n Ingrese el medio de pago: ");
			fflush(stdin);
			scanf("%c", &medioPago);
			if(medioPago!='e' && medioPago!='t' && medioPago != 'd' && medioPago != 'b'){
				system("cls");
				printf("\n ERROR Ingrese una opcion valida\n");
			}
			if(medioPago == 'e'){
				printf("\n Ingrese el monto recibido por el cliente: ");
				scanf("%f",&pago);
			}
		}while(medioPago!='e' && medioPago!='t' && medioPago != 'd' && medioPago != 'b');
		
		litros = calcularLitros(carga, tipo);
		
		if(medioPago == 'e'){
			vuelto = calcularVuelto(pago,carga);
			printf("\n Total de litros cargados: %.2f\n",litros);
			printf(" El vuelto del cliente es: %.2f\n",vuelto);
		}
		else
			printf("\n Total de litros cargados: %.2f\n",litros);
		
		//calcula cantidad max de litros
		if(flag==0){
			maxlitros=litros;
			maxlitrosTipo=tipo;
			maxlitrosMedio=medioPago;
			flag=1;
		}else if(litros>maxlitros){
			maxlitros=litros;
			maxlitrosTipo=tipo;
			maxlitrosMedio=medioPago;
		}
		//acumuladores de dinero recaudado por cada medio de pago
		switch(medioPago){
			case 'e': recaudadoE += carga; break;
			case 't': recaudadoT += carga; break;
			case 'd': recaudadoD += carga; break;
			case 'b': recaudadoB += carga; break;
		}
		//acumuladores de litros cargados por cada tipo de combustible
		if(tipo == 'd'){
			litrosD += litros;
		}else if(tipo == 'n'){
			litrosN += litros;
		}
		
		printf("\n Desea realizar otra carga? (s/n): ");
		fflush(stdin);
		scanf("%c", &rta);
	}while(rta == 's');
	
	mostrar(litrosN, litrosD, recaudadoE, recaudadoT, recaudadoD, recaudadoB, maxlitros, maxlitrosTipo, maxlitrosMedio);
    system("pause");
	return 0;
}

void ingresar(){
	int acceso=0;
	char pass[30];
	do{
		system("cls");
		printf("\n Ingrese la contraseña: ");
		scanf("%s",pass);
		if(strcmp(pass,"qwerty")!=0){
			system("cls");
			printf("\n ERROR la contraseña no es valida\n\n ");
			system("pause");
		}
		else
			acceso = 1;
	}while(acceso==0);
}

float calcularLitros(float valor_carga, char tipo){
	float litros;
	if(tipo =='n'){
		litros = valor_carga / 1000;
	}
	else if(tipo=='d'){
		litros = valor_carga / 1500;
	}
	return litros;
}

float calcularVuelto(float pago, float valor_carga){
	return pago - valor_carga;
}


void mostrar(float lN, float lD, float recE,float recT,float recD,float recB, float maxl ,char maxltipo, char maxlmedio){
	system("cls");
	printf("\n Resultados del dia\n");
	printf(" ------------------\n");
	printf("\n El total de litros de Nafta Super es: %.2f", lN);
	printf("\n El total de litros de Diesel Premium es: %.2f\n", lD);
	printf("\n La recaudacion total en efectivo es: %.2f", recE);
	printf("\n La recaudacion total en tarjeta de credito es: %.2f", recT);
	printf("\n La recaudacion total en debito es: %.2f", recD);
	printf("\n La recaudacion total en billeteras virtuales es: %.2f\n", recB);
	printf("\n La mayor carga de litros de combustible realizado es: %.2f",maxl);
	printf("\n El tipo de combustible de la mayor caga realizada es: %c", maxltipo);
	printf("\n El medio de pago usado en la mayor carga realizada es: %c\n\n ", maxlmedio);
}

