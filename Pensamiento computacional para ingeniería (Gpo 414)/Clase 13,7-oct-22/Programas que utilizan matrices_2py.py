"""Menores a un número dado
Escribe una función que reciba como parámetro una matriz y un valor entero maximo y regrese una lista con los números de
la matriz que son menores al valor máximo recibido como parámetro.

Escribe también una función que solicite los datos (número de renglones, número de columnas y elementos de la matriz)
y genere la matriz correspondiente (lista con sublistas)."""

num_row=int(input("Dame el numero de renglones "))
num_col=int(input("Dame el numero de columnas "))
matriz = []

# Inicializar y asumir que tanto el mayor como el menor están en el primer elemento; solo para inicializar


for row_count in range(num_row): #row=renglon
    row=[]
    for col_count in range(num_col):#columna
        dato=int(input("Dame dato: "))
        row.append(dato)
    matriz.append(row)

for row_count in range(num_row): #row=renglon
    for col_count in range(num_col):#columna
       print(matriz[row_count][col_count], end=" ")#end para agregarle espacio en vez de saltar de linea
    print()#Hace el salto de linea

mayor = matriz[0][0]
menor = matriz[0][0]

# Momento de recorrer la matriz y obtener el mayor como el menor
for fila in matriz:
    for valor in fila:
        if valor > mayor:
            mayor = valor
        if valor < menor:
            menor = valor

print("De la matriz: ")
print(matriz)
print(f"El menor es {menor} y el mayor es {mayor}")
