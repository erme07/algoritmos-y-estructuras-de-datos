Algoritmo ejercicio_08_codigo
	// Realizar un programa que pida el ingreso de 2 n�meros y la operaci�n a realizar
	// entre ellos y muestre el resultado de la operaci�n
	Escribir 'Ingrese el primer numero (a)'
	Leer a
	Escribir 'Ingrese el segundo numero (b)'
	Leer b
	Escribir 'Operaciones'
	Escribir 's = suma'
	Escribir 'r = resta'
	Escribir 'm = multiplicacion'
	Escribir 'd = division'
	Escribir 'Elija una operacion'
	Leer operacion
	Seg�n operacion Hacer
		's':
			resultado <- a+b
			Escribir 'a + b = ', resultado
		'r':
			resultado <- a-b
			Escribir 'a - b = ', resultado
		'm':
			resultado <- a*b
			Escribir 'a * b = ', resultado
		'd':
			resultado <- a/b
			Escribir 'a / b = ', resultado
		De Otro Modo:
			Escribir 'Opcion incorrecta'
	FinSeg�n
FinAlgoritmo
