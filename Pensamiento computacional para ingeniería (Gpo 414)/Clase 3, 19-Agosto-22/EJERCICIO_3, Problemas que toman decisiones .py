#Escribe un programa que calcule el IMC (Índice de Masa Corporal) de una persona,
#el cual se utiliza para determinar si la proporción de peso y altura es adecuada.
#El IMC se puede calcular utilizando la siguiente fórmula:
#indice = peso / altura**2
Peso=float(input("Dame el peso "))
Altura=float(input("Dame la altura "))
indice= Peso/Altura**2
if indice<20:
    print("PESO BAJO")
elif 20 <= indice < 25:
    print("NORMAL")
elif 25 <= indice < 30:
    print("SOBREPESO")
elif 30 <= indice < 40:
    print("OBESIDAD")
elif 40 >= indice:
    print("OBESIDAD MORBIDA")

