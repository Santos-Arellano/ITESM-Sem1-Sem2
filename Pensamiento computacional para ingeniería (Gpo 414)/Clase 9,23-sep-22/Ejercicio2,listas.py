"""Promedio Lista"""
#definimos una lista vacia
lista = []
Num=int(input("Dame un numero mayor a cero "))
while Num<=0:
    Num=int(input("Upss, Dame un numero positivo "))
else:
    #disponemos un ciclo de dependiendo cuantos valores se ingresan
    for x in range(Num):
        valor=int(input("Ingrese un valor entero:"))
        lista.append(valor)

#imprimimos la lista
print(lista)
print("Promedio: ", sum(lista)/len(lista))