Algoritmo ejercicio_16_codigo
	// Desarrolle un diagrama de flujo que permita calcular el promedio de las
	// notas de un curso. el algoritmo termina cuando se ingresa la nota 0.
	suma_nota <- 0
	cont <- 0
	Escribir 'Ingrese la nota del alumno'
	Leer nota
	Mientras nota<>0 Hacer
		cont <- cont+1
		suma_nota <- suma_nota+nota
		Escribir 'Ingrese la nota del alumno'
		Leer nota
	FinMientras
	prom_nota <- suma_nota/cont
	Escribir 'El promedio de las notas del curso es: ', prom_nota
FinAlgoritmo
