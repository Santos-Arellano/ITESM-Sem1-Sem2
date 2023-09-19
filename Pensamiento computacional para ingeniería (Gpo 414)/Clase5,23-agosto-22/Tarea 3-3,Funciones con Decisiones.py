"""Escribe un programa en el cual definas la función es_bisiesto. 

Esta función debe recibir como parámetro un número entero que representa un año, y te debe regresar True si el año es bisiesto, y False en caso contrario.

Recuerda que un año es bisiesto si es divisible entre 4, excepto cuando es divisible entre 100. Aquellos años que son divisibles entre 100 no son bisiestos, a menos que sean divisibles entre 400.
"""

def es_bisiesto(x):
  if x%4==0 and (not(x%100==0) or x%400==0 ):
    texto='True'
  else:
    texto='False'
  return texto
x=int(input('Introduzca un año:'))
print(es_bisiesto(x))
