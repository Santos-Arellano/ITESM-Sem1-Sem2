from math import pi

#1.Función segundos
def segundos(s):
  dias=s//86400
  ss=s%86400
  horas=ss//3600
  ss=ss%3600
  min=ss//60
  ss=ss%60
  print (f"{s} segundos equivale a: \n{dias} días, \n{horas} horas, \n{min} minutos, \n {ss} segundos")
  
#2.Función convierte pies a metros
def pies_a_cm(p):
   return (p*30.48)

#3.Funcion del volumen de una esfera
def radio_a_volumen(radio):
    volumen=(4/3)*(pi*radio**3)
    print(f"El volumen es {volumen:.4f}")

#4.Funcion multiple de
def funcion_multiplo_de(num1,num2):
    if num1%num2==0:
        print ("True")
    else:
        print ("False")

#Menu de funciones
print("****MENU DE FUNCIONES*** \n ")
print("1. Segundos a días,horas, minutos ")
print("2.Pies a centímetros")
print("3.Funcion del volumen de una esfera ")
print("4.Multiplos de numeros")
print("5.SALIR ")



while True:
    menu=int(input("Elige una opcion del menu "))
      
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
        print ("Vuelva pronto ")
        break
    
       
       
