"""Lista al cuadrado"""
#definimos una lista vacia
lista = []
Lista = []
Num=int(input("Dame la cantidad de elementos a agregar a la lista "))
while Num<=0:
    Num=int(input("Upss, Dame un numero positivo "))
else:
    #disponemos un ciclo de dependiendo cuantos valores se ingresan
    for x in range(Num):
        valor=int(input("Ingrese un valor entero:"))
        lista.append(valor)
        Lista = [valor**2,valor**2]
print(lista)
print(Lista)