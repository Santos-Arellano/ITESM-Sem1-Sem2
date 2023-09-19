num_row=3
num_col=3
matrix=[]
"""#matrix=[[1,2,3],
        [4,5,6],
        [7,8,9]]"""
num_row=3
for row_count in range(num_row): #row=renglon
    row=[]
    for col_count in range(num_col):#columna
        dato=int(input("Dame dato: "))
        row.append(dato)
    matrix.append(row)

for row_count in range(num_row): #row=renglon
    for col_count in range(num_col):#columna
       print(matrix[row_count][col_count], end=" ")#end para agregarle espacio en vez de saltar de linea
    print()#Hace el salto de linea
print(sum(matrix))


#print(matrix)

#print(matrix, sep="\n") #sep= agregar algo entre las impresiones de valores


