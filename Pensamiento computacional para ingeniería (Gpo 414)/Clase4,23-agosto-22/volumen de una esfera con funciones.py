#Volumen de una esfera
from math import pi
def radio_a_volumen(r):
    return(4/3)*(pi*r**3)
radio=float(input("Dame el radio de la esfera "))
volumen=radio_a_volumen(radio)
print(f"El volumen es {volumen:.4f} ")
    

