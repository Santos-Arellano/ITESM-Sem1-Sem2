from math import sqrt
#Sacar la hipotenusa de un triangulo rectangulo
print("Dame el primer cateto")
a=float(input())
print("Dame el segundo cateto")
b=float(input())
#Formula de hipotenusa
Hipo=sqrt((a**2)+(b**2))
print(f"la hipotenusa es {Hipo:.4f}")