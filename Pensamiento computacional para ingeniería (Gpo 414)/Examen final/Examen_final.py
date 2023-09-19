#Santos Arellano A01643742
#Fecha: 18/10/2022
"""Cree una función llamada encontrar_tres que reciba como parámetro una 
lista de números y devuelve la suma de todos los números de esa lista que son 
divisibles por 3. Así, si la lista fuera [0,4,2,6,9,8,3,12],
la función devolvería 30 (0+6+9+3+12)"""
 #lista con numeros divisibles entre 3 python
x = int(input("Ingrese un valor entero: "))

for c in range(0,x):
    if c % 3 == 0:
        continue
    print(c)