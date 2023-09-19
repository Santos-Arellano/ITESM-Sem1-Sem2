"""Calcula Grado
Escribe un programa en el cual definas la función llamada calcula_grado.
Esta función debe recibir un número flotante entre 0 y 1, y debe regresar una nota alfabética de acuerdo con la siguiente tabla.

Score	Nota
>0.9	A
>0.8	B
>0.7	C
>0.6	D
<=0.6	F
 Entrada
Un número flotante entre 0 y 1."""

score=float(input("Dame un numero entre (0,1) "))
def calcula_grado(score):
    if score>0.9:
        return "A"
    elif score>0.8:
        return "B"
    elif score>0.7:
        return"C"
    elif score>0.6:
        return "D"
    elif score<=0.6:
        return "F"
if 0<= score <=1:
    print(calcula_grado(score))
else:
    print("Score incorrecto")
    