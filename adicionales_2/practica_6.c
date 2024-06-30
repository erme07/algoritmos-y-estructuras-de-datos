#include <stdio.h>
#include <stdlib.h>

float montoViatico(float,float, float);
void mostrar(int);

int main(){
	int legajo,contv2000=0;
	float gastopeaje,gastocomida,anticipo,km,viatico,total;
	char categoria,continuar;
	
	do{
		system("cls");
		printf("\n Ingrese el codigo de legajo: ");
		scanf("%d",&legajo);
		printf("\n CATEGORIAS");
		printf("\n ----------");
		printf("\n\n [v]  Vendedor\n [j]  Jefe comercial\n [g]  Gerente de producto\n");
		printf("\n Ingrese la categoria del empleado: ");
		fflush(stdin);
		scanf("%c",&categoria);
		printf("\n Ingrese los kilometros recorridos: ");
		scanf("%f",&km);
		printf("\n Gastos de peaje: ");
		scanf("%f",&gastopeaje);
		printf("\n Gastos de comida: ");
		scanf("%f",&gastocomida);
		
		if(categoria == 'v'){
			if(km > 2000)
				contv2000++;
			printf("\n Ingrese el valor de anticipo: ");
			scanf("%f",&anticipo);
		}
		
		viatico = montoViatico(km,gastopeaje,gastocomida);
		total = viatico - anticipo;
		
		if(total > 0){
			printf("\n Importe a pagar por la empresa: %g\n", total);
		}else{
			printf("\n Importe a devolver por el empleado: %g\n",total);
		}
		
		printf("\n Continuar registrando empleados? s/n: ");
		fflush(stdin);
		scanf("%c",&continuar);
	}while(continuar=='s');
	
	system("cls");
	mostrar(contv2000);
	return 0;
}

float montoViatico(float km, float peaje, float comida){
	float diferencia,monto;
	if(km>2000){
		diferencia = km - 2000;
		monto = (2000 * 10) + (diferencia * 5) + peaje + comida;
	}else{
		monto = (km * 10) + peaje + comida;
	}
	return monto;
}
void mostrar(int cont){
	printf("\n Cantidad de \"vendedores\" que recorrieron mas de 2000km: %d\n",cont);
	system("pause");
}
