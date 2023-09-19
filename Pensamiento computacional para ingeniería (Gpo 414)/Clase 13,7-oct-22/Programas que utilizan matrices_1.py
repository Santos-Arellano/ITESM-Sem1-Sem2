

"""Crea matriz de números consecutivos por renglón.
Realiza un programa que cree una matriz de n renglones y m columnas que
deberá estar llena de números consecutivos por renglón comenzando por 1."""
num=0
num_row=int(input("Dame el numero de renglones"))
num_col=int(input("Dame el numero de columnas"))
matriz = []

# Inicializar y asumir que tanto el mayor como el menor están en el primer elemento; solo para inicializar


for row_count in range(num_row): #row=renglon
    row=[]
    for col_count in range(num_col):#columna
        row.append(num)
        num=num+1
    matriz.append(row)
print(matriz)
