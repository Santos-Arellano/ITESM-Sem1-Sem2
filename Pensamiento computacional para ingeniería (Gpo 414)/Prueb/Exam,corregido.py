opcion='s'
while opcion=='s':
    una_letra_punto = ["A","E", "O"," S"," I"," U"," N"," L"," R", "T"]
    dos_letras_puntos = [ "C,D, G"]
    tres_letras_puntos = ["M","B", "P"]
    cuatro_letras_puntos = ["F","H"," V", "Y"]
    seis_letras_puntos = ["J"]
    ocho_letras_puntos = ["K"," Ñ"," Q"," W"," X"]
    diez_letras_puntos = ["Z"]

    palabra=input("Dame una palabra (MAYUSCULAS)")
    puntos=0
    for letra in palabra:
        if letra == 'A' or letra == 'E' or letra == 'O' or letra == 'S' or letra == 'I' or letra == 'U' or letra == 'N' or letra == 'L' or letra == 'R'or letra == 'T':
   #elif letra=='c':          
    #"A","E", "O"," S"," I"," U"," N"," L"," R", "T"
            puntos=puntos+1
        elif letra == 'C' or letra == 'D' or letra == 'G':
              #"C,D, G"
              puntos=puntos+2

        elif letra == 'M' or letra == 'B' or letra == 'P':
              #"M","B", "P"
             puntos=puntos+3
        elif letra == 'F' or letra == 'H' or letra == 'V' or letra == 'Y':
              #"F","H"," V", "Y"
             puntos=puntos+4
        elif letra == 'J':
              #"J'
             puntos=puntos+6
        elif letra == 'K' or letra == 'Ñ' or letra == 'Q' or letra == 'W' or letra == 'X':
              #"K"," Ñ"," Q"," W"," X"
            puntos=puntos+8
        elif letra == 'Z':
              #"Z"
            puntos=puntos+10
             
    print(puntos)
    opcion=input("Quieres seguir s/n? ")