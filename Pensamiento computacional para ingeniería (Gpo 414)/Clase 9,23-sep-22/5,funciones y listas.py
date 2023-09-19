"""Escribe la función tirada, que recibe un número entero n y devuelve la
suma de los puntos generados por la simulación de tirar n veces un dado.
Utiliza un ciclo for y para simular la “tirada del dado” utiliza randint o randrange de la librería random."""
from random import randrange
def tirada(n):
    lista=[]
    for x in range(n):
        num=randrange(1,7)
        lista.append(num)
        ans=sum(lista)
        return ans
n=3
print(tirada(n))