"""Escribe la función los_3_menores, la cual recibe una lista de datos numéricos
y te regresa otra lista con los 3 elementos más pequeños de la lista.
Asume que la lista que llega como parámetro tiene al menos 4 elementos."""
lista=[5,1,17,15]
def los_3_menores(lista):
    lista_nueva=sorted(lista) #sorted para ordenas una lista por valores
    print(lista_nueva[0:3])

los_3_menores(lista)