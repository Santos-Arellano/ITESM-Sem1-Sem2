"""
Santos Arellano 9 SEPTIEMBRE
PROBLEMA 2
calcule el promedio de 3 calificaciones proporcionadas por el usuario (enteras o reales).  
"""
def promedio(cal_1,cal_2,cal_3):
    input(f"Entraste a la funcion promedio preciona <ENTER> para saber el resultado de {cal_1} + {cal_2} + {cal_3} / 3")
    print((cal_1 + cal_2 + cal_3) /3)
    
cal_1 = float(input("Dame la calificion 1: "))
cal_2 = float(input("Dame la calificion 2: "))
cal_3 = float(input("Dame la calificion 3: "))

promedio(cal_1,cal_2,cal_3)


print(" <<<< FIN DEL PROGRAMA >>>> ")
