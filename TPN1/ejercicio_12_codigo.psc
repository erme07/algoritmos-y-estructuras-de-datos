Algoritmo ejercicio_12
	// Dada una cantidad expresada en pies, y otra en metros. determinar la
	// suma pero convertida a pulgadas, a yardas, a metros y a millas por separado.
	// considere las siguientes equivalencias:
	// 1 milla = 1609 metros, 1 pulgada = 0.0254 metros, 1 yarda = 3 pies, 1 pie = 12pulgadas.
	Escribir 'Escriba el primer valor en metros'
	Leer num1
	Escribir 'Escriba el segundo valor en <pies>'
	Leer num2
	num2 <- num2*0.3048
	suma <- num1+num2
	suma_pulg <- suma/0.0254
	suma_yard <- suma/0.9144
	suma_mill <- suma/1609.344
	Escribir 'La suma en pulgadas es: ', suma_pulg
	Escribir 'La suma en yardas es: ', suma_yard
	Escribir 'La suma en metros es: ', suma
	Escribir 'La suma en millas es: ', suma_mill
FinAlgoritmo
