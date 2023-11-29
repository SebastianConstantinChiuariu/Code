from os import system
from time import sleep

#Menú
prog = 1
while (prog!=0):
    print("\n                 Dibuix amb Punts")
    print("\n\n      Nombre Introduit = Punts a la pantalla")
    y = input("\n\nNombre: ")

    def repetits (a,b):
        c = b*int(a)
        return c

    def crear_punts(a):
        for i in a:
            a = repetits(int(i),".")
            print(a)

    crear_punts(y)


    

        



          