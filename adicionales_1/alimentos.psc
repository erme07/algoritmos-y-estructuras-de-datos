Algoritmo Alimentos
	mincal <- 0
	bandera <- verdadero
	Repetir
		Escribir 'Ingrese el nombre del alimento'
		Leer nombre_alimento
		Escribir 'Ingrese la cantidad de calorias'
		Leer calorias
		Si calorias > 150 Entonces
			Escribir "Alimento no recomendable"
		SiNo
			Escribir "Alimento recomendable"
		FinSi
		Escribir 'Ingrese el tipo de alimento'
		Escribir '1 = Panes y Cerelaes'
		Escribir '2 = Frutas y Verduras'
		Escribir '3 = Lacteos y Carnes'
		Escribir '4 = Grasas y Azucares'
		Leer tipo_alimento
		Escribir 'Ingrese el origen del alimento'
		Escribir 'o = Organico'
		Escribir 'n = No Organico'
		Leer origen_alimento
		Si tipo_alimento==2 Y origen_alimento=='o' Entonces
			cantorg_tipo2 <- cantorg_tipo2+1
		FinSi
		Según tipo_alimento Hacer
			1:
				acumcal_tipo1 <- acumcal_tipo1+calorias
			2:
				acumcal_tipo2 <- acumcal_tipo2+calorias
			3:
				acumcal_tipo3 <- acumcal_tipo3+calorias
			4:
				acumcal_tipo4 <- acumcal_tipo4+calorias
		FinSegún
		Si bandera Entonces
			mincal <- calorias
			mincal_nombre <- nombre_alimento
			mincal_tipo <- tipo_alimento
			bandera <- false
		SiNo
			Si calorias < mincal Entonces
				mincal <- calorias
				mincal_nombre <- nombre_alimento
				mincal_tipo <- tipo_alimento
			FinSi
		FinSi
		Repetir
			Escribir "Desea seguir ingresando alimentos?"
			Escribir "1 = SI"
			Escribir "2 = NO"
			Leer decision
			Si decision<>1 Y decision<>2
				Escribir "Ingrese una opcion valida"
			FinSi
		Hasta Que decision==1 O decision==2
	Hasta Que decision == 2
	Escribir "Cantidad de alimentos organicos de tipo 2: ", cantorg_tipo2
	Escribir "Calorias ingeridas de tipo 1:", acumcal_tipo1 
	Escribir "Calorias ingeridas de tipo 2: ", acumcal_tipo2
	Escribir "Calorias ingeridas de tipo 3: ", acumcal_tipo3
	Escribir "Calorias ingeridas de tipo 4: ", acumcal_tipo4
	Escribir "Alimento de menor caloria ingerido"
	Escribir "nombre: ", mincal_nombre
	Escribir "tipo: ", mincal_tipo
	Escribir "calorias: ", mincal
FinAlgoritmo
