Algoritmo ejercicio_21_codigo
	// En un campeonato inter-colegial se desea conocer la categor�a a la que
	// corresponde cada participante.
	// se ingresa el nombre y la edad de cada uno de ellos.
	// el programa termina cuando el nombre es igual a "zzz".
	// - categor�a infantil, para los menores de 11 a�os
	// - categor�a puber, entre los 11 y los 14 a�os
	// - categor�a juvenil, para los mayores de 14 a�os
	// informar nombre y categor�a
	Escribir 'Ingrese el nombre'
	Leer nombre
	Mientras nombre<>'ZZZ' Hacer
		Escribir 'Ingrese la edad'
		Leer edad
		Escribir 'nombre: ', nombre
		Si edad>14 Entonces
			Escribir 'Categoria: JUVENIL'
		SiNo
			Si edad<=14 Y edad>=11 Entonces
				Escribir 'Categoria: PUBER'
			SiNo
				Escribir 'Catgoria: INFANTIL'
			FinSi
		FinSi
		Escribir 'Ingrese el nombre'
		Leer nombre
	FinMientras
FinAlgoritmo
