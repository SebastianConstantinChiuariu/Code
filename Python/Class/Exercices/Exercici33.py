import random
import time

# Funció on expliquem què passa
def intro():
    print ("""En una època on els gegants governen Menorca. Nosaltres necessitem menjar,
    Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.
    Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran
    i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.
    """)

# Funció on demanem a quin talaiot volem anar
def canviTalaiot():
    talaiot = ""
    while talaiot != "1" and talaiot != "2":
        talaiot = input("A quin Talaiot vols anar? Introdueixi 1 o 2: ")
    return talaiot

# Funció que ens indica si compartiran el menjar o serem nosaltres el seu àpat
def trobada(canviTalaiot, puntuacio):
    a=puntuacio
    print ("T'estas apropant al talaiot...")
    time.sleep(2)
    print ("Està fosc i és tenebrós...")
    time.sleep(2)
    print ("Un gran gegant salta davant teu, t'agafa i ...")
    print ("")
    time.sleep(2)
    gegantamic = random.randint (1, 2) # fa un random amb nombres interins 'rand' , 'int'
    if canviTalaiot == str(gegantamic):
        print ("Et convida a menjar...")
        a+= 1
        print ("\n La teva puntuació és {}".format(a))
    else:
        print ("Se't menja d'un mos...ÑAMÑAMÑAM")
        a-=1
        if a == 0:
            print ("La teva puntuació es {}, s'ha acabat el joc".format(a))
        print ("\n La teva puntuació és {}, ets mort".format(a))
    return a

# Funció principal
 
partidaNova = ("si")
puntuacio = 1
while puntuacio>0 and partidaNova == ("s") or partidaNova == ("si"):
    intro()
    nTalaiot = canviTalaiot()
    puntuacio=trobada(nTalaiot, puntuacio)
    if puntuacio>0:
        partidaNova = input("Vols tornar a mejar (jugar)? Introdueixi si o no: ")
        print("\n")
    else:
        print("S'ha acabt el joc")

