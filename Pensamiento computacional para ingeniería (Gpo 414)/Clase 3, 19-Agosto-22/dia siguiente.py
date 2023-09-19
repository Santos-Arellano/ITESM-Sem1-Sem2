dia=int(input("Dame dia "))
mes=int (input("Dame mes "))
año=int (input("Dame año "))
dia=dia+1
if mes==12 and dia==31:
  dia=1
  mes=1
  año=año+1
elif (mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12) and dia==31:
  dia=1; mes-mes+1
else:
  dia=dia+1
print ("la fecha es", dia"/", mes"/", año)