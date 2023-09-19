#Santos Arellano A01643742

#Declarar varaibles
palabra=tuple(input("Dame una palabra (MAYUSCULAS)"))
una_letra_punto = ["A","E", "O"," S"," I"," U"," N"," L"," R", "T"] 
dos_letras_puntos = [ "C,D, G"]
tres_letras_puntos = ["M","B", "P"]
cuatro_letras_puntos = ["F","H"," V", "Y"]
seis_letras_puntos = ["J"]
ocho_letras_puntos = ["K"," Ñ"," Q"," W"," X"]
diez_letras_puntos = ["Z"]

def score(palabra, puntaje=0):
    for le in (palabra):
        if le in una_letra_punto:
            puntaje = puntaje + 1
        if le in dos_letras_puntos:
            puntaje = puntaje + 2
        if le in tres_letras_puntos:
            puntaje = puntaje + 3
        if le in cuatro_letras_puntos:
            puntaje = puntaje + 4
        if le in seis_letras_puntos:
            puntaje = puntaje + 6
        if le in ocho_letras_puntos:
            puntaje = puntaje + 8
        if le in diez_letras_puntos:
            puntaje = puntaje + 10
        #imprimir el puntaje
    print (puntaje)
        #Calcular el promedio
    promedio=puntaje/palabra

    