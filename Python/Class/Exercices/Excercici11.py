def gran(x,y):
    a=x
    if(x>y):
        print(x,"es mayor que ", y)
    elif(y>x):
        print(y," es mayor que ", x)
        a=y
    else:
        print(x," es igual que ", y)
    return a
    
# Aplicación principal
a = int(input("Escriu el primer valor: "))
b = int(input("Escriu el segon valor: "))
c = gran(a,b)
print("El major de ",a, " i ",b, " es ""=" ,c)