#include <stdio.h>
#include <stdlib.h>

int calcExpensas(char,int,char);
void mostrarCant(int);

int main(){
	int num_depa,uso,base,expensas,contprofd=0;
	char categoria,multa,cochera,continuar;
	float monto_multas=0, monto_total;
	
	do{
		system("cls");
		printf("\n Ingrese el numero del departamento. ");
		scanf("%d",&num_depa);
		printf("\n Categorias\n");
		printf(" ----------\n\n");
		printf(" [p]  piso\n [s]  semipiso\n [d]  dos ambientes\n [m]  monoambiente\n\n");
		do{
			printf(" Ingrese la categoria del departamento: ");
			fflush(stdin);
			scanf("%c",&categoria);
			if(categoria!='p' && categoria!='s' && categoria!='d' && categoria!='m')
				printf("\n ERROR, Ingrese una categoria valida\n\n");
		}while(categoria!='p' && categoria!='s' && categoria!='d' && categoria!='m');
		
		printf("\n Tipo de uso\n");
		printf(" -----------\n\n");
		printf(" [1] Profesional\n [2] Particular\n");
		do{
			printf("\n Ingrese el tipo de uso: ");
			scanf("%d",&uso);
			if(uso!=1 && uso!=2)
				printf("\n ERROR, Ingrese un valor valido\n");
		}while(uso!=1 && uso!=2);
		
		do{
			printf("\n Tiene cochera? (s/n): ");
			fflush(stdin);
			scanf("%c",&cochera);
			if(cochera!='s' && cochera!='n');
				printf("\n ERROR, Ingrese un dato valido\n");
		}while(cochera!='s' && cochera!='n');
		
		
		
		do{
			printf("\n Tiene Multas por pagar? s/n: ");
			fflush(stdin);
			scanf("%c",&multa);
			if(multa!='s'&& multa!='n')
				printf("\n ERROR, Ingrese un dato valido\n");
		}while(multa!='s'&& multa!='n');
		
		if(multa =='s'){
			printf("\n Ingrese el monto de las multas: $");
			scanf("%f",&monto_multas);	
		}else{
			monto_multas=0;
		}
		
		if(categoria == 'd' && uso == 1){
			contprofd++;
		}
		
		expensas = calcExpensas(categoria,uso,cochera);
		monto_total= (float)expensas + monto_multas;
		
		system("cls");
		printf("\n Monto a pagar\n");
		printf(" -------------\n\n");
		printf(" Expensas:\t$%d\n Multas:\t$%g\n",expensas,monto_multas);
		printf(" Total a pagar:\t$%g\n",monto_total);
		
		printf("\n Continuar registrando datos de departamentos? s/n: ");
		fflush(stdin);
		scanf("%c",&continuar);
		
	}while(continuar=='s');
	
	mostrarCant(contprofd);
	return 0;
}

int calcExpensas(char cat,int uso,char coch){
	int adProf,adCochera,base;
	switch(cat){
			case 'p': base = 4000; break;
			case 's': base = 3000; break;
			case 'd': base = 2000; break;
			case 'm': base = 1000; break;
	}
	adProf = (uso == 1) ? 2500 : 0;
	adCochera = (coch == 's') ? 1500 : 0;
	return base + adProf + adCochera;
}

void mostrarCant(int cont){
	system("cls");
	printf("\n Cantidad de departamentos \"dos ambientes\" de uso profesional: %d\n\n",cont);
}
