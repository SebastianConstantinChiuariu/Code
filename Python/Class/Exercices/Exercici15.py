
from os import system
system('clear')

from time import sleep

#Menú

llista_menu = ["Suma de numeros","Multiplicació de numeros"]
print("\n               Menú")
print("________________________________")
print ("\n             1.Sumar")
print("             2.Restar")
print("________________________________")
opcio = input("\n              Opció: ")

# Funcions

if opcio == "1":
    def sumar(numeros):
        suma = 0
        for x in numeros:
            suma += x
        return suma

    numeros = [1,2,3,4,5]
    print("\n           Resultat =",(sumar(numeros)))

if opcio == "2":
    def multiplicar(numeros):
        multiplicar = 1
        for x in numeros:
            multiplicar *= x
        return multiplicar

    numeros = [1,3,5,10]   
    print("\n           Resultat =",(multiplicar(numeros)))

    