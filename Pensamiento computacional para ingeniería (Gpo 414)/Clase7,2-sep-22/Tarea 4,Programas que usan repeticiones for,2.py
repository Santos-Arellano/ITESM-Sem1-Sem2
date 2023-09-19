"""Escribe un programa que pida los valores a y b y muestre una cuenta regresiva de números que va desde b hasta a. Supón que a < b."""
a=int (input ("Dame a "))
b=int(input("Dame b "))
for i in range(a,b-1+a):
    print(b-i+a)
    