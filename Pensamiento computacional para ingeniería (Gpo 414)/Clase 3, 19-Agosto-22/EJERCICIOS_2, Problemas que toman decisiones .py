#Realiza un programa que muestre el mayor de 3 números enteros x, y, z
#proporcionados por el usuario.
#No utilices la función incorporada de Python max ().
x=int(input("Dame el primer numero "))
y=int(input("Dame el segundo numero "))
z=int(input("Dame el tercer numero "))
if x>y:
    print("El numero mayor es", x)
elif y>z:
    print("El numero mayor es ", y)
else:
    print("El numero mayor es ", z)

