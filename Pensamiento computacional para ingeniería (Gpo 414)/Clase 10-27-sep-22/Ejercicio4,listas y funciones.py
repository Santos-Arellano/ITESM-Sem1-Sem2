"""Lista al cuadrado"""
def Cuadrado(lista,n):
    while n<=0:
        n=int(input("Dame un numero mayor a cero "))
    for x in range(n):
        valor=int(input())
        lista.append(valor)
    lista=sorted(lista)
    print(lista)
    #disponemos un ciclo de dependiendo cuantos valores se ingresan
    for x in lista:
        lista2.append(x**2)
    return lista2

lista=[]
lista2=[]
n=int(input("Cantidad de número en la lista?\n"))
print(Cuadrado(lista,n))