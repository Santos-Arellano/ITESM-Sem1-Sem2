"""Imprimir la figura
*
 **
 ***
 ****
 *****
 ******"""
N=int(input("Dame la cantidad de asteriscos "))
figura="*"
for N in range(0,N+1,1):
    print(N * figura) #mostramos el resultado