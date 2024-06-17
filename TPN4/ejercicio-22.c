/*
Enunciado

El siguiente programa intenta contar cuantos carácteres “t” seguidos de “a” hay en
una frase que se pedirá por pantalla, la frase acabará con un punto. En el programa hay
errores, corrígelos. Ejemplo de ejecución (en negrita los datos introducidos por el
usuario):

Escribe un frase(para finalizar un punto): abba tkktajjtaiitaktaoi.
– ta – aparece 4 veces

#include <stdio.h>
#include <stdlib.h>

main(){ 
int antes, tot=0;
char ahora;
antes='z';
printf("Escribe una frase, para acabar un punto '.': \n");
scanf("%c", &ahora);
while (ahora!='.')
if (ahora=='a' || antes=='t') then {tot ++;}
antes=ahora;
scanf("%c", &orain);
printf(" aparece veces '-ta-'", tot);
printf("\n\n");
system ("PAUSE");
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){ 
	int tot=0;
	char ahora,antes;
	
	antes='z';
	printf("\n Escribe una frase, para acabar un punto '.': ");
	//scanf("%c", &ahora);  Reemplazo scanf() por getch()
	ahora=getch();
	printf("%c",ahora);
	
	while (ahora!='.') {
		if (ahora=='a' && antes=='t')
			tot ++;
		antes = ahora;
		//scanf("%c", &ahora);
		ahora = getch();
		printf("%c",ahora);
	}
	printf("\n\n '-ta-' aparece %d veces\n\n ", tot);
	system ("PAUSE");
	return 0;
}
