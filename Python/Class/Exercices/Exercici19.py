from os import system
from time import sleep

#Menú 
print("\n            Multiplicador de Caracters")
sleep(1.5)
print("\nInsereix el caracter i el digit per multpilicar-lo")
sleep(3)


def multplicador(x,y):
    z = x * int(y)
    return z
    
    
x = input("\n\nCaracter: ")
y = input("Nombre:")
print("\nResultat del mulyiplicador: ", multplicador(x,y))



