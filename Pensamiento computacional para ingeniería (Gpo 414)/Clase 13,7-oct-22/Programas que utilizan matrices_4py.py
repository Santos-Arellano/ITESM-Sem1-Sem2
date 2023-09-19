"""Suma columnas de una matriz

Escribe un programa que pregunte el número de renglones y número de columnas de una matriz,
después pregunte cada número de la matriz y regrese una lista con la suma de cada columna de la matriz."""

num_row=int(input("Dame el numero de renglones "))
num_col=int(input("Dame el numero de columnas"))
matriz=[]
# Lo único que hacemos es sumar todos los valores y dividirlos por los elementos totales
# Nota: si la matriz es una matriz "cuadrada" entonces podrías simplemente usar
# len(matriz) * len(matriz[0])
elementos = 0
sumatoria = 0

if  num_row < 1 and num_col < 2:
    print ("error")
else:
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
    for fila in matriz:
         for elemento in fila:
             sumatoria += elemento
             elementos += 1
    print(f"La suma es {sumatoria}  para la matriz que tiene {elementos} elementos")