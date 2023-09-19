"""Escribe un programa que con el uso de estatutos for imprima un pinito de navidad de n niveles con asteriscos.
Para obtener el nivel del pinito pide al usuario que capture un número entero."""
n = int(input("Dame el numero de niveles del pino3 "))
j =n
for i in range (1, n+1):
    espacio = " " * j
    asterisco = "* " * i
    print(espacio, asterisco)
    j=j- 1
    def pideNumero():
        n = int(input("N= "))
        return n
    def puntArbol(n): j= n