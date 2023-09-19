
"""
Arellano Olarte Santos Alejandro
Llama a una función para generar una lista de 10 elementos con números random.
Pregunta en el programa principal el tope para los números random y pásalo como parámetro. 
Crea una función llamada estadísticas que recibe una lista e imprima 
Cuál es el número máximo generado.
Cuál es el número mínimo.
Cuál es el promedio de los datos. 
Crea una función llamada adivina que recibirá una lista y preguntará al usuario un número.
Si el número que ingresó el usuario está en la lista, el programa terminará e imprimirá "Acertaste!",
si el usuario no acertó el número le pedirá números hasta que encuentre alguno y pueda terminar el programa.
"""

        

lista=[5,7,8,6,4,3,1,9,6,3]
insert=int(input("inserta el limite que deseas para el random"))

n_maximo=max(lista)
n_minimo=min(lista)
mean=statistics.mean(lista)
x=adivina(lista)

from random import randint
num=randint(0,insert)
print("el numero maximo de tu lista es:",n_maximo)
print("el promedio de tu lista es de :",mean)
print("el numero menor de tu lista es :",n_minimo)
print("manda a llamar funcion :",x)
adivina=int(input("adivina un numero de la lista"))
while adivina ==lista:
    print("Acertaste!!!!")
    print(lista)
else:
  adivina=int(input("adivina un numero de la lista"))
        
    