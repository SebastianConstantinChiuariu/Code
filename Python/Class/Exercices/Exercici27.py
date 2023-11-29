from os import system
from time import sleep

# Inici
system('cls')
print("\n           Calculadora d'Anys")
print("         ______________________")
anyactual = input ("\n- Insereix l'any Actual: ") 
system('cls')

def Menu():
    print("\n           Calculadora d'Anys")
    print("         ______________________")
    print("\n                  {}".format(anyactual))

def Dades_Naixement():
    nom1 = input ("\nInsereix el Primer Nom: ")
    any1 = int(input ("Insereix l'any de Naixement: "))
    edat1 = 0
    system ('cls')
    Menu()
    nom2 = input ("\nInsereix el Segon Nom: ")
    any2 = int(input ("Insereix l'any de Naixement: "))
    edat2 = 0
    system ('cls')
    Menu()
    nom3 = input ("\nInsereix el Tercer Nom: ")
    any3 = int(input ("Insereix l'any de Naixement: "))
    edat3 = 0
    system ('cls')
    Menu()
    nom4 = input ("\nInsereix el Quart Nom: ")
    any4 = int(input ("Insereix l'any de Naixement: "))
    edat4 = 0
    
    #Cálcul d'Edat
    edat1 = anyactual - any1
    edat2 = anyactual - any2
    edat3 = anyactual - any3
    edat4 = anyactual - any4

    print ("""
        Nom          Anys       Anys que en farà actualment
        {}            {}                    {}
        {}            {}                    {}
        {}            {}                    {}
        {}            {}                    {}""".format(nom1,any1,edat1,nom2,any2,edat2,nom3,any3,edat3,nom4,any4,edat4))



Menu()
Dades_Naixement()

