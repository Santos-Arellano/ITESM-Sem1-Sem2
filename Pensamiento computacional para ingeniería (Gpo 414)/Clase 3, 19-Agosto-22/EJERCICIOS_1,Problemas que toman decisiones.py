#Una persona puede obtener su licencia de manejo si es mayor de edad y tiene identificación oficial.
edad = int(input("dame tu edad: "))
if edad >= 18:
    ide=input("¿Tienes identificación oficial? (s/n): ")
if edad >= 18 and ide == "s":
    print("si puede obtener su licencia ")
elif edad >= 18 and ide == "n":
        print("No puede obtener su licencia")
elif edad < 18 and edad >= 1:
    print("No puede obtener su licencia")