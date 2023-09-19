"""Crea la función invierte, el cual recibe como parámetro una lista y devuelve otra lista con los datos
invertidos."""
#definimos una lista vacia
lista = []
contador=0
Num=int(input("Dame la cantidad de elementos a agregar a la lista (mayor a cero) "))
while Num<=0:
    Num=int(input("Upss, Dame un numero positivo "))
    
#disponemos un ciclo de dependiendo cuantos valores se ingresan
for x in range(Num):
    valor=int(input("Ingrese un valor entero:"))
    lista.append(valor)
lista=sorted(lista)
print(lista)
contador=int(len(lista))
contador+=1
for x in range(-1,-contador,-1):
    print(f"lista[{x}] = {lista[x]}")