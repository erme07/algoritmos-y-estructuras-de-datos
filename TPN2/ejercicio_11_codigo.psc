Algoritmo ejercicio_11_codigo
	// Dada la cantidad de horas trabajadas, la antig�edad, y la categor�a del
	// empleado, y adem�s sabemos que cobra 650 pesos por cada a�o trabajado y
	// que el valor de la hora seg�n la categor�a es: 
	// cat 1= 100, cat 2= 200, cat 3=250, cat 4= 300.
	// a. determinar sueldo del empleado.
	// b. informar si el sueldo supera los 20000 pesos.
	Escribir 'Ingrese las horas trabajadas'
	Leer horas
	Escribir 'Ingrese los a�os de antiguedad'
	Leer antiguedad
	Escribir 'Categorias'
	Escribir '[1] Categoria 1     [2] Categroia 2     [3] Categoria 3'
	Escribir 'Ingrese la categoria'
	Leer categoria
	Seg�n categoria Hacer
		1:
			valorcat <- 100
		2:
			valorcat <- 200
		3:
			valorcat <- 250
		4:
			valorcat <- 300
		De Otro Modo:
			Escribir 'Categoria inexistente'
	FinSeg�n
	sueldo <- antiguedad*650+horas*valorcat
	Escribir 'El sueldo es: $', sueldo
FinAlgoritmo
