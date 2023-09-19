"""Escribe un programa que sume los números enteros (positivos y negativos)
que el usuario teclee yse detenga hasta que el usuario teclee un cero."""
s= 0
n= 1
while n != 0:
    n = int(input('Dame un numero (Presiona 0 para terminar): '))
    if n != 0:
        print(n)
        s= s+n
else:
     print("La suma de los numeros es igual a " + str(s))
   