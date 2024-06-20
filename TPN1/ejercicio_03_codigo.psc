Algoritmo ejercicio_03
	// Escribir un algoritmo en el cual se ingresan dos variables a y b. realice la
	// suma, la resta, la división y la multiplicación de a con b. muestre los cuatro
	// resultados por pantalla. luego intercambie el valor de las dos variables y
	// mostrar los valores intercambiados.
	Escribir 'Ingrese el valor de a'
	Leer num_a
	Escribir 'Ingrese el valor de b'
	Leer num_b
	suma <- num_a+num_b
	resta <- num_a-num_b
	division <- num_a/num_b
	multiplicacion <- num_a*num_b
	Escribir 'a + b = ', suma
	Escribir 'a - b = ', resta
	Escribir 'a / b = ', division
	Escribir 'a * b = ', multiplicacion
	aux <- num_a
	num_a <- num_b
	num_b <- aux
	Escribir 'Nuevo valor de a: ', num_a
	Escribir 'Nuevo valor de b: ', num_b
FinAlgoritmo
