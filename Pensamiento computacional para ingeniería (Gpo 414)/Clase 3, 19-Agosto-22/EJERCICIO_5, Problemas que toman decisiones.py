#El siguiente algoritmo se puede usar para determinar si un año determinado es bisiesto:
#Los años bisiestos son cualquier año que es divisible por 4 (como 2012, 2016, etc).
#Excepto si puede dividirse por 100, entonces no lo es (como 2100, 2200, etc).
#A menos que pueda ser divisible por 400, como 2000, 2400.
#Escribe el programa que determine si un año es bisiesto o no.
año=int(input("Dame el año "))
if año % 4 != 0: #no divisible entre 4
	print("False")
elif año % 4 == 0 and año % 100 != 0: #divisible entre 4 y no entre 100 o 400
	print("True")
elif año % 4 == 0 and año % 100 == 0 and año % 400 != 0: #divisible entre 4 y 10 y no entre 400
	print("False")
elif año % 4 == 0 and año % 100 == 0 and año % 400 == 0: #divisible entre 4, 100 y 400
	print("True")


