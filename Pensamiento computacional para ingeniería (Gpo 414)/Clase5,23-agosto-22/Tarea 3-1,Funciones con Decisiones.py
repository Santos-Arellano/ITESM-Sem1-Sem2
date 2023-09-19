"""Convertidor a centímetros
Escribe un programa que convierta pies, pulgadas y yardas a centímetros, para lo cual debes definir 3 funciones:

Función que reciba una cantidad de pies (entero positivo) y devuelva el equivalente a centímetros.
Función que reciba una cantidad de pulgadas (entero positivo) y devuelva el equivalente a centímetros.
Función que reciba una cantidad de yardas (entero positivo) y devuelva el equivalente en centímetros."""

print ("Elige opcion en la que quieres que se expresa la cantidad")
print("1 – pies a cm, 2 - pulgadas a cm, 3 – yardas a cm")

opcion = int(input("Elige opcion < 1, 2, 3 >: "))
cantidad = float(input("indica la cantidad: :"))
 
if opcion == 1:
     print (f" {cantidad} pies son {cantidad*30.48} cm") #pies a cm
   
if opcion == 2:
     print (f" {cantidad} pulgadas son {cantidad*2.54} cm") #pulgadas a cm
 
if opcion == 3:
    print(f" {cantidad} yardas son {cantidad*91.44} cm") #yardas a cm