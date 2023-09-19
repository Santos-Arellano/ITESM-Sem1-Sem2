print("El area y e volumen  del Prisma recto")
def area_prisma(x):
 A=float(input("Introduzca el Apotema: "))
 l=float(input("introduzca el lado: "))
 h=float(input("introduzca la altura: "))
 a=l*(h+A)
 v=((l*A)/2)*h 
 print("El area del prisma recto es:  ",a,"\n")
 print("El volumen del prisma  :  ",v,"\n")
area_prisma(0)