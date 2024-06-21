Algoritmo ejercicio_14_codigo
	// Se realiza una encuesta entre 100 personas que votan por los candidatos a o b
	// se pide informar los porcentajes obtenidos por cada candidato.
	conta <- 0
	contb <- 0
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		Escribir 'Seleccione el candidato a o b'
		Leer voto
		Si voto=='a' Entonces
			conta <- conta+1
		SiNo
			Si voto=='b' Entonces
				contb <- contb+1
			SiNo
				Escribir 'Ingrese una opcion valida'
			FinSi
		FinSi
	FinPara
	Escribir 'Porcentaje candidato a: ', conta, '%'
	Escribir 'Porcentaje candidato b: ', contb, '%'
FinAlgoritmo
