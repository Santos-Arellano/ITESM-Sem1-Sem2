"""Escribe una función llamada duplica que recibe una lista.
La función modifica el valor de los elementos de la lista a su doble."""
Num=int(input("Dame la cantidad de elementos a agregar a la lista (mayor a cero) "))
lista=[]
def duplica(lista):
    lista2=[]
    for x in lista:
        lista2.append(x**2)
    print(lista)
    print(lista2)
lista=[1,2,3,4,5]
print(duplica(lista))
