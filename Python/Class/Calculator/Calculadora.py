from os import system
system('cls')
from time import sleep

#Definició de funcions auxiliar
#Funció del menú  principal
def menu_principal():
        system('cls')
        print("\n            Calculadora_\n")
        print("               Menú")
        print("""
        1. Números Enters 
        2. Numeros reals
        3. Canvis de base 
        0. Aturar Calculadora
        """)
        opcio = input ("\n  Selecciona l'opció que vulguis: ")
        return opcio

# Funció Menú nombres Enters
def menu_enters():
    system('cls')
    print("""
    Calculadora de nombres enters\n
            1. Sumar
            2. Restar
            3. Dividir
            4. Multiplicar
            5. Potència
            6. Mòdul
            0. Sortir\n""")
    opcio= input("\n  Selecciona l'opció que vulguis: ")
    return opcio

# Funció Menú nombres Reals
def menu_reals():
    print("""
Calculadora de nombres reals

        1. Sumar
        2. Restar
        3. Dividir
        4. Multiplicar
        0. Sortir""")
    opcio= input("\n  Selecciona l'opció que vulguis: ")
    return opcio

#Funció Canvis de Base Menú

def menu_canvis_de_base():

    print("""
    Calculadora de canvis de base

        1. Decimal a Binari
        2. Decimal a Octal
        3. Decimal a Hexadecimal
        0. Sortir""")
    opcio= input("\n  Selecciona l'opció que vulguis: ")
    return opcio

#Funcions decimal_a_octal
def dectobin(numero):
    return bin(numero)
def dectooct(numero):
    return oct(numero)
def dectohex(numero):
    return hex(numero)
# Binari a octal, decimal i hexadecimal
def bintooct(numero):
    a=int(numero,2)
    return dectooct(a)
def bintodec(numero):
    a=int(numero,2)
    return a
def bintohex(numero):
    a=int(numero,2)
    return dectohex(a)
# Octal a binari, decimal i hexadecimal
def octtobin(numero):
    a = int(numero,8)
    return dectobin(a)
def octtodec(numero):
    a = int(numero,8)
    return a
def octtohex(numero):
    a=int(numero,8)
    return dectohex(a)
# Hexadecimal a binari, octal i decimal
def hextonum(hex): # Aquesta funció passa qualsevol hexadecimal a un numero
    pnum = {
        "f": 15,
        "e": 14,
        "d": 13,
        "c": 12,
        "b": 11,
        "a": 10
    }
    if hex in pnum:
        return pnum[hex]
    else:
        return int(hex)
def hextodec2(hex):
    hex = hex.lower()
    hex = hex[::-1]
    decimal = 0
    posicio = 0
    for digit in hex:
        valor  = hextonum(digit)
        elevat = 16 ** posicio
        pnum = elevat * valor
        decimal += pnum
        posicio += 1
    return decimal
def hextobin(numero):
    a=int(numero,16)
    return dectobin(a)
def hextooct(numero):
    a=int(numero,16)
    return dectooct(a)
def hextodec(numero):
    a = int(hextodec2(numero))
    return a
# Progrma principal de la calculadora
opcio="1"
while(opcio!="0"):
    if (opcio!="0"):
        opcio = menu_principal()
    match opcio:
        case "1":
            system('cls') # Calculadora de números enters
            opcio2=menu_enters()
            system('cls')
            if (opcio2!="0"):
                a = int(input("Indiqui el primer operand: "))
                b = int(input("Indiqui el segon operand: "))
            match opcio2:
                case "1":
                    system('cls')
                    c=a+b
                    print("La suma de ",a," més ",b," és ",c)
                case "2":
                    system('cls')
                    c=a-b
                    print("La resta de ",a," menys ",b," és ",c)
                case "3":
                    system('cls')
                    c=a*b
                    print("La multiplicació de ",a," per ",b," és ",c)
                case "4":
                    system('cls')
                    c=a//b
                    print("La divisió de ",a," entre ",b," és ",c)
                case "5":
                    system('cls')
                    c= a ** b
                    print("La potència de ",a," elevat a ",b," és ",c)
                case "6":
                    system('cls')
                    c= a % b
                    print("El mòdul de ",a," mòdul ",b," és ",c)
                case "7":
                    system('cls')
                    c= a / b
                    print("El cocient de ",a," entre ",b," és ",c)
                case "0":
                    system('cls')
                    print("Adéu")
                    opcio="0"
                case other:
                    print("opció no vàlida!")
        case "2":
            system('cls') # Calculadora de números reals
            opcio2=menu_reals()
            system('cls')
            if (opcio2!="0"):
                a = float(input("Indiqui el primer operand: "))
                b = float(input("Indiqui el segon operand: "))
            match opcio2:
                case "1":
                    system('cls')
                    c=a+b
                    print("La suma de ",a," més ",b," és ", c)
                case "2":
                    system('cls')
                    c=a-b
                    print("La resta de ",a," menys ",b," és ", c)
                case "3":
                    c=a*b
                    print("La multiplicació de ",a," per ",b," és ", c)
                case "4":
                    system('cls')
                    c=a/b
                    print("La divisió de ",a," entre ",b," és ", c)
                case "5":
                    system('cls')
                    c= a ** int(b)
                    print("La potència de ",a," elevat a ",b," és ",c)
                case "0":
                    system('cls')
                    print("Adéu")
                    opcio="0"
                case other:
                    print("opció no vàlida!")
        case "3": # Canvis de base
            opcio2=menu_canvis_de_base()
            system('cls')
            if (opcio2!="0"):
                system('cls')
                a =input("Indiqui el número a convertir: ")
            match opcio2:
                case "1": # Binari a
                    system('cls')
                    b=bintooct(a)
                    c=bintodec(a)
                    d=bintohex(a)
                    print("El número binari ",a," en octal= ",b, " en decimal= ",c," en hexadecimal= ", d)
                case "2": # Octal a
                    system('cls')
                    b=octtobin(a)
                    c=octtodec(a)
                    d=octtohex(a)
                    print("El número octal ",a," en binari= ",b, " en decimal= ",c," en hexadecimal= ", d)
                case "3": # Decimal a
                    system('cls')
                    b=dectobin(int(a))
                    c=dectooct(int(a))
                    d=dectohex(int(a))
                    print("El número decimal ",a," en binari= ",b, " en octal= ",c," en hexadecimal= ", d)
                case "4": # Hexadecimal a
                    system('cls')
                    b=hextobin(a)
                    c=hextooct(a)
                    d=hextodec(a)
                    print("El número hexadecimal ",a," en binari= ",b, " en octal= ",c," en decimal= ", d)
                case "0":
                    system('cls')
                    sleep(1)
                    print("\n     Mode Suspensió")
                    sleep(2)
                    iniciar=input("\nPitjar ENTER per iniciar: ")
                    opcio=1

                case other:
                    
                    print("Opció no vàlida!")
                    sleep(2)
                    system('cls')

             