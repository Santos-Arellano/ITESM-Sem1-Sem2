"""
PROBLEMA 1
 Santos Arellano 9 SEPTIEMBRE
programa debe calcular el costo de envío del paquete, en base a los precios establecidos
"""
try: 
    BLUE = "\033[34m"
    YELLOW = "\033[33m"
    RED ="\033[31m"
    VERDE = "\033[32m"
    AZUL_CIELO = "\033[36m"
    def transportar(peso):
        if (peso>=1) and (peso<10):
            tarifa= 120
        elif (peso>=10):
            tarifa= 270
        return(tarifa)

    print(VERDE + ">>>  INICIO DEL PROGRAMA  <<<")

    kilos=1
    acumulador=0

    while kilos != 0:
        kilos = float(input(BLUE + "Digita el no de kilos: "))
        if kilos != 0:
            
            costo=transportar(kilos)
            
            acumulador=acumulador+costo
            print(YELLOW + f"Tu tarifa va en {acumulador}")
        else:
            print(RED+ "ADIOS")
            print(AZUL_CIELO + f"Tu total de costo de envio sera  $ {acumulador}")
            break
except:
    print(RED + "ERROR, por favor contacte con un tecnico")