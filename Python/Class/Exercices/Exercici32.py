from os import system

system ('cls')
print ("\n     Calculador d'any de Traspàs")
print("    _____________________________")

def any_tras():
    any = int(input("\n Insereix un any: "))
    system('cls')
    if any %4 == 0 and (any %400>0 or any%100==0):
        print ("\n L'any {} es de Traspàs".format(any))
    else:
        print("\n L'any {} no es de Traspàs".format(any))

any_tras()
