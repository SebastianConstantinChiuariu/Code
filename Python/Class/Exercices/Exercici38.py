import datetime
import time
from os import system

## <Menú
system('cls')
menu = ("\n   Calculador de digits")
bara = ("\n ________________________")

for i in menu:
    print(i, end="", flush=True)
    time.sleep(0.08)
for i in bara:
    print(i, end="", flush=True)
    time.sleep(0.03)

def Calculador():
    print ('Calcula nombres entre 1 i 90.000')
    time.sleep(0.2)
    nombre = input ("Insereix un nombre ")


Calculador()