#Realiza un programa para calcular los valores de la ecuación cuadrática
#ax^2+bx+c usando la fórmula cuadrática.
#El programa debe leer tres valores enteros a, b y c, y encontrar los valores de x,
#considerando las siguientes restricciones:
#Si a = 0 y b = 0 se debe desplegar el mensaje "No tiene solucion”
#Si a = 0 y b != 0 se debe despejar el valor de x = –c/b y mostrar este valor.
#Si a != 0 y b != 0 se debe calcular el discriminante.
#Si el valor del discriminante es negativo debe mostrar el mensaje "Raices complejas"
#Si el valor del discriminante es positivo debe calcular y mostrar los dos valores de x, una en cada renglón
#En caso de que el discriminante sea cero se debe mostrar sólo un valor de x = -b/(2a)
a=int(input("Dame el valor de a "))
b=int(input("Dame el valor de b "))
c=int(input("Dame el valor de c "))
if a==0 and b==0:
    print("No tiene solucion")
elif a== 0 and b!=0:
    x=(-c/b)
    print(x)
elif a!= 0 and b!= 0:
#Discriminante
    disc=(b**2-4*a*c)
    print(disc)
elif disc<0:
    print("Raices complejas")
elif disc>0:
    print(x)
    print(disc)
    X=(-b)/(2*a)
elif disc==0:
   print(X)

    

