from os import system
from time import sleep

#Menú
prog = 1
while (prog!=0):
    print("\n             Clasificador  de nombres")
    print(" \n\n                      0. |<|")
    print("                      1. |>|")       

#Programa

    inici = input("\n                      Opció: ")
    match inici:
        case "0":
            
            system ('cls')

            def men_maj(numeros):
                numeros = list(xifres)
                numeros.sort(reverse=False)
                return numeros

            xifres =input("Insereix les xifres: ")

            print("\n    ",men_maj(xifres))



        case "1":

            system("cls")
            
            def maj_men(numeros):
                numeros = list(xifres)
                numeros.sort(reverse=True)
                return numeros

            xifres =input("Insereix les xifres: ")

            print("\n      ",maj_men(xifres))



        case _:
            sleep(0.5)
            system('cls')
            espais = "\n\n\n\n\n\n"
            print(espais,"                 Opció Inexistent")
            sleep(2)
            system('cls')
            prog = 1

   
