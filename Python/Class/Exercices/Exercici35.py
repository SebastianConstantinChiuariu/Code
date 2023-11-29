from os import system
from time import sleep

print ("\n           RIMA O NO RIMA ")
print("         __________________")

# Comptador de Frases
def Comptador_frases(x, y):
    
    
    x = First_word[-3:]
    y = Second_Word[-3:]

    print("____________________________________")

    if x[-3:] == y[-3:]: 
        print ("\n Rimen els últims 3 digits \n {} - ({}) \n {} - ({}).".format(First_word,x,Second_Word,y))
    elif x[-2:] == y [-2:]:
        print ("\n Rimen els últims 2 digits \n {} - ({}) \n {} - ({}).".format(First_word,x[-2:],Second_Word,y[-2:]))
    elif x[-1:] == y [-1:]:
        print ("\n Rima l'últim digit \n {} - ({}) \n {} - ({}).".format(First_word,x[-1:],Second_Word,y[-1:]))




# PP
sleep(1)
First_word = input ("\n Insereix la Primera Paraula: ")
Second_Word = input ("\n Insereix la Segona Paraula: ")
Comptador_frases(First_word,Second_Word)
