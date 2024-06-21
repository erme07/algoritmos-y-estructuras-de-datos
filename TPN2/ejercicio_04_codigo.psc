Algoritmo ejercicio_04_codigo
	// Dados la cantidad de varones y el de mujeres de un curso, calcular el total
	// de alumnos. si el total supera los 35 alumnos informar curso numeroso.
	// en caso contrario, calcular e informar lo que se deberá pagar para realizar
	// una salida con todos, si cada alumno paga $55.
	Escribir 'Ingrese la cantidad de varones'
	Leer num_h
	Escribir 'Ingrese la cantidad de mujeres'
	Leer num_m
	total <- num_h+num_m
	Si total>35 Entonces
		Escribir 'Curso numeroso'
	SiNo
		Escribir 'Para realizar una salida con todos se debe pagar: ', total*55
	FinSi
FinAlgoritmo
