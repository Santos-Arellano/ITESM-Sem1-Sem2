#Santos Arellano A01643742 
#Ejercicio de tienda de sillas
# Entrada
# Una letra mayúscula que representa el tipo de silla 
# Una letra mayúscula que representa el tipo de cliente
# Un número entero que indica la cantidad de sillas a comprar.
# 
# Salida
# El subtotal antes de descuento
# El descuento
# El total a pagar por el cliente

#Función para obtener el costo de la silla a partir de su tipo
def costo_silla(tipo_silla):
    if(tipo_silla == "B"):
        #costo=700
        return 700
    elif(tipo_silla == "E"):
        #costo=900
        return 900
    else:
        #costo=1500
        return 1500
#Función para calcular el descuento con base al tipo de cliente
def descuento(tipo_cliente, compra):
    if(tipo_cliente == "F"):
        #descuento=.20
        return .20
    elif((tipo_cliente == "N") and (20000> compra >= 10000)):
        #descuento=.10
        return .10
    elif((tipo_cliente == "N") and (compra >= 20000)):
        #descuento=.15
        return .15
    elif((tipo_cliente == "N") and (compra < 100000)):
        return 0
    
    
def main():
    #solicitar el tipo de silla
    tipo_silla = input()
    #solicitar el tipo de cliente
    tipo_cliente = input()
    #cantidad_sillas
    cantidad_sillas = int(input())
    
    #Buscar el costo de la silla en base al tipo
    costoS = costo_silla(tipo_silla)
    #calcular subtotal = cantiad_sillas * costo silla
    subtotal = cantidad_sillas * costoS
    des = (descuento(tipo_cliente,subtotal))*subtotal
    total = subtotal - des
    
    print(subtotal)
    print(des)
    print(total)
    main()
        