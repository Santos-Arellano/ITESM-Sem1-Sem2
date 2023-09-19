import random
Nombre=str(input("Dame tu nombre "))
contador=0

#Suma
while contador<5:
    num1=random.randint(0,9)
    num2=random.randint(0,9)
    suma=int(input(f"{num1} + {num2} = "))
    if suma== num1+num2:
        contador=contador+1
        print(contador)
print("***Felicidades*** subiste a nivel 2 ((:" )
while contador >=5 and contador<10:
    num1=random.randint(0,9)
    NUM2=random.randint(10,99)
    suma=int(input(f"{num1} + {NUM2} = "))
    if suma== num1+NUM2:
        contador=contador+1
        print(contador)
print(f"Felicidades {Nombre}!!! estas en el salon de la fama")
print("""..... (¯`v´¯)♥
.......•.¸.•´
....¸.•´
... (
☻/
/▌♥♥
/ \ ♥♥
""")
#Resta
while contador<5:
    num1=random.randint(10,99)
    num2=random.randint(10,99)
    resta=int(input(f"{num1} - {num2} = "))
    if resta== num1-num2:
        contador=contador+1
        print(contador)
    else:
        resta=int(input(f"{num1} - {num2} = "))
        
    



#Menu de funciones
print(" MENU DE FUNCIONES \n ")
print("1. Sumas")
print("2.Restas")
print("3.Multilicacion")
print("5.Salir ")

menu=int(input("Elección: "))
if menu==1:
  segs=int(input ("Dame la cantidad en segundos a convertir en días, horas y minutos "))
  segundos(segs)
elif menu==2:
  pies=float(input("Dame los pies a convertir en centímetros:"))
  cms=pies_a_cm(pies)
  print(f"{pies} pies equivale a {cms:.3f} cm") #limito a 3 decimales
elif menu==3:
    radio=float(input("Dame el radio de la esfera "))
    volumen=radio_a_volumen(radio)
elif menu==4:
    num1=int(input("Numero 1 "))
    num2=int(input("Numero 2 "))
    funcion_multiplo_de(num1,num2)   
elif menu==5:
    Num_1=float(input("Numero 1 "))
    Num_2=float(input("Numero 2 "))
    Funcion_compara(Num_1,Num_2)   
