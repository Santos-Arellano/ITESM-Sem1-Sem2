"""Determinante de una matriz de 2X2"""
import copy
def determinante(matriz): ##Metodo de cofactores
    suma=0
    #  Caso base, determinante de una matriz de 2x2
    if len(matriz) == 2 and len(matriz[0])==2:
        suma = matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1]
        return suma
    else:
        for i in range(len(matriz)): # Itero sobre las columnas
            aux = copy.deepcopy(matriz) # Duplico la matriz para no modificar la original y poder hacer los cálculos bien 
            aux.remove(matriz[0]) #Elimino la primera fila
            for j in range(len(aux)): #Me muevo por las filas restantes 
                #Creo submatrices sin tener en cuenta la columna actual pero sí la fila
                aux[j] = aux[j][0:i] + aux[j][i+1:] 
            #Calculo los determinante de estas submatrices recursivamente y los sumo al total
            suma += (-1) ** (i % 2) * matriz[0][i] * determinante(aux)
        return suma
        
        
print((determinante([[0,3,4,5],[1,5,6,5],[2,7,9,5],[1,1,1,5]])))