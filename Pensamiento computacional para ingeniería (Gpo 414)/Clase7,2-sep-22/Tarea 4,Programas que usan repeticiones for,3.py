"""Escribe un programa que encuentre el mayor de una lista de n números dados por el usuario.
Este es un ejercicio en el que se espera que encuentres el valor mayor sin utilizar funciones predefinidas de python."""
maximo = int(input("Dame la cantidad de numeros ")) 
mayor = 0
for i in range(maximo):
    num = int(input('Dame un numero:'))
    if num > mayor:
        mayor = num
print(mayor)