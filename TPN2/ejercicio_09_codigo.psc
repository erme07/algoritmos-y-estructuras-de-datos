Algoritmo ejercicio_09_codigo
	// Dado los 3 lados de un tri�ngulo determinar qu� tipo de triangulo es.
	Escribir 'Lados de un triangulo'
	Escribir 'Ingrese el primer lado'
	Leer l1
	Escribir 'Ingrese el segundo lado'
	Leer l2
	Escribir 'Ingrese el tercer lado'
	Leer l3
	Si l1==l2 Entonces
		Si l2==l3 Entonces
			Escribir 'Es un triangulo equilatero'
		SiNo
			Escribir 'Es un triangulo is�sceles'
		FinSi
	SiNo
		Si l1==l3 Entonces
			Escribir 'Es un triangulo is�sceles'
		SiNo
			Escribir 'Es un triangulo escaleno'
		FinSi
	FinSi
FinAlgoritmo
