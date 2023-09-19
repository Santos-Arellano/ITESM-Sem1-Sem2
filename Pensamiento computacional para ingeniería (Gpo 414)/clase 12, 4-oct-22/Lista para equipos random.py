from random import randint
datos="Santos Arellano, a,eee"
datos=datos.split(',')

def equipos_2(nombres):
    while (True):
        opc=input("")
        if nombres == []:
            break
        elif len(nombres)== 1:
            print (nombres[0])
            break
        num1= randint(0,len (nombres) -1)
        integrante_1=nombres [num1]
        nombres.pop(num1)
        
        num2 = randint (0,len (nombres)-1)
        integrante_2= nombres[num2]
        nombres.pop(num2)
        print (f" {integrante_1} | {integrante_2}")
equipos_2(datos)