def gran_de_tres(x,y,z):
    a=x
    if(x>y):
        if(x>z):
            a = x
        elif (z>x):
            a = z
        else:
            a = x
    elif (y>x):
        if (y>z):
            a = y
        elif (z>y):
            a = z
        else:
            a = y
    else:
        if (x>z):
            a = x
        elif (z>x):
            a = z
        else: 
            a = x
    return a 

# Aplicación principal
a = int(input("Escriu el primer valor: "))
b = int(input("Escriu el segon valor: "))
c = int(input("Escriu el tercer valor: "))
d = gran_de_tres(a,b,c)
print("El major de ", a, ", ",b, ", ",c," es ", d)