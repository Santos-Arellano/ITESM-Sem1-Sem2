#Santos Arellano A01643742
#Fecha: 18/10/2022
"""Crea una función llamada is_palindrome que recibe una cadena como parámetro y
devuelve true si esa cadena es un palíndromo, false en caso contrario. Recuerda que un 
palíndromo es una palabra que es igual hacia adelante o hacia atrás (anitalavalatina. 
Para obtener todos los puntos, tu función debe ignorar
mayúsculas y minúsculas y debe trabajar con cualquier carácter (no sólo letras).
Así que ("Ana$ana" es un palíndromo aunque la A sea mayúscula y la a minúscula).
"""

def palindromo_recursivo(cadena, inicio, fin):
    if inicio >= fin:
        return True
    if cadena[inicio] == cadena[fin]:
        return palindromo_recursivo(cadena, inicio+1, fin-1)
    else:
        return False