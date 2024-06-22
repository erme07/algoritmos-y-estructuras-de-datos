Algoritmo ejercicio_22_codigo
	// Crear un programa para calcular el salario semanal de unos empleados a
	// los que se les paga 250 pesos por hora si éstas no superan las 35 horas. cada
	// hora por encima de 35 se considerará extra y se paga a 85 pesos.
	// el programa pide las horas del trabajador y devuelve el salario que se le
	// debe pagar.
	// además el programa debe preguntar si deseamos calcular otro salario, si es
	// así el programa se vuelve a repetir
	Repetir
		Repetir
			Escribir 'Ingrese las horas trabajadas'
			Leer horas
			Si horas<=0 Entonces
				Escribir 'Debe ser mayor a cero'
			FinSi
		Hasta Que horas>0
		Si horas>35 Entonces
			salario <- (horas-35)*85+(250*35)
		SiNo
			salario <- horas*250
		FinSi
		Escribir 'El salario a pagar es: ', salario
		Repetir
			Escribir 'Desea calcular otro salario? s/n'
			Leer rta
			Si rta<>'s' Y rta<>'n' Entonces
				Escribir 'Respuesta invalida'
			FinSi
		Hasta Que rta=='s' O rta=='n'
	Hasta Que rta=='n'
FinAlgoritmo
