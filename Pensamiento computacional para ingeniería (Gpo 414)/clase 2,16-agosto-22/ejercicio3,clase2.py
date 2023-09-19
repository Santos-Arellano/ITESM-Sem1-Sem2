#Eres el cajero de un banco y tienes que entregar
#la cantidad solicidada por el usuario en billetes de 200
#,50,20 y monedas de 1

Dinero=int(input("Dame la cantidad de dinero:" ))
Bi_200=(Dinero//200)
Dinero=(Dinero%200)
Bi_50=(Dinero//50)
Dinero=(Dinero%50)
Bi_20=(Dinero//20)
Dinero=(Dinero%20)
Mon_1=(Dinero//1)
Dinero=(Dinero%1)
print(f"Son {Bi_200:} de $200 \n {Bi_50} de $50 \n {Bi_20} de $20 \n {Mon_1} de $1")
