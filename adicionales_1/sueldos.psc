Algoritmo sueldos
	Para i<-1 Hasta 30 Con Paso 1 Hacer
		Escribir "Ingresar nombre"
		Leer nombre
		Escribir "Ingresar sexo h = hombre   m = mujer"
		Leer sexo
		Escribir "Ingrese sueldo bruto"
		Leer sueldobruto
		Escribir "Ingrese la cantidad de hijos"
		Leer hijos
		Si sexo=='h' Entonces
			hombres<-hombres+1
			asignacion<-0
		SiNo
			Si sueldobruto>=100 Y  sueldobruto<=2800 Entonces
				asignacion <- 270*hijos
			SiNo
				Si sueldobruto>2800 Y sueldobruto<=4000 Entonces
					asignacion <- 204*hijos
				SiNo
					Si sueldobruto>4000 Y sueldobruto<=5200 Entonces
						asignacion <- 136*hijos
					SiNo
						asignacion <- 0
					FinSi
				FinSi
			FinSi
		Fin Si
		Si asignacion==0 Entonces
			sinasignacion <- sinasignacion + 1
		FinSi
		descuento <- sueldobruto * 0.15
		neto <- sueldobruto - descuento + asignacion
		acumsueldo <- acumsueldo + neto
		acumdesc <- acumdesc + descuento
		Escribir "Sueldo bruto: ", sueldobruto
		Escribir "Sueldo neto: ",neto
		Escribir "Descuento: ",descuento
		Escribir "Asignacion: ",asignacion
	Fin Para
	Escribir "Promedio de sueldos: ",acumsueldo/30
	Escribir "Cantidad de empleados que no cobran asignaciones: ",sinasignacion
	Escribir "Total de descuentos: ",acumdesc
	Escribir "Porcentaje de hombres: " (hombres/30)*100
FinAlgoritmo
