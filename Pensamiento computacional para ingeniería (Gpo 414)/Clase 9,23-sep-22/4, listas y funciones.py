"""Escribe la función combina_listas, la cual recibe dos listas
y como resultado devuelve una lista con los datos de las dos listas intercalados.
Consideraciones: las dos listas tienen elementos, pero pueden tener diferente tamaño."""
def combina_listas(l1,l2):
 lr=[]
 if len(l1) > len(l2):
     long=len(l1)
 else:
     long=len(l2)
 for idx in range(len(l2)):
     if idx < len(l1):
         lr.append(l1[idx])
     if idx < len(l2):
         lr.append(l2[idx])
 return lr
l1=[1,2,3,4,5]
l2=[9,8,7,6]
print (combina_listas(l1,l2))