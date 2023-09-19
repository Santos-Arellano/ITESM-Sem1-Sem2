"""Escribe una función llamada mayores_N que recibe una lista capturada por el usuario y un número n,
la función debe devolver cuántos de los elementos de la lista son mayores a n."""
def mayores_N(lista1,n):
    contador=0
            #disponemos un ciclo de dependiendo cuantos valores se ingresan
    for x in lista1:
       if x>n:
           contador+=1
    return contador
lista1=[1,2,3,4,5]
n=3
mayores_N(lista1,n)
print(mayores_N(lista1,n))