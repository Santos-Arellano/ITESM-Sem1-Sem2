#Santos Alejandro Arellano Olarte, A01643742
#Construir un programa que calcule y muestre por pantalla las raíces de la ecuación de segundo grado de coeficientes reales. Los valores de los coeficientes se indican en el propio código del programa mediante sentencias de asignación a variables reales. Siendo la ecuación de segundo grado de la forma: f(x)=a·x^2+b·x +c,
from math import sqrt
#Pedir variables
a=1
b=2
c=3

#Discriminante
d=(b**2-4*a*c)
X1=(-b+sqrt(d))/(2*a)
X2=(-b-sqrt(d))/(2*a)
print(f"X1 es {X1:.2f} ")
print(f"X2 es {X2:.2f} ")
