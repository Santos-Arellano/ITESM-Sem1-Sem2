"""Lee lista y muestra"""
#definimos una lista vacia
lista = []
Num=int(input("Dame la cantidad de elementos a agregar a la lista (mayor a cero) "))
while Num<=0:
    Num=int(input("Upss, Dame un numero positivo "))
else:
    #disponemos un ciclo de dependiendo cuantos valores se ingresan
    for x in range(Num):
        valor=int(input("Ingrese un valor entero:"))
        lista.append(valor)
        print(lista)
print(lista)