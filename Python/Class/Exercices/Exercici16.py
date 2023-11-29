from time import sleep
from os import system
system('clear')

#menú principal

print("\nInversor de textos")
repetició = 1
while (repetició!=0):
    def invertir (a):

        invert = list(a)
        b = a[::-1]
        c = str(b)
        return c
        
        
    
    l = input("\nText per invertir: ")
    print("\nText Invertit: ",invertir(l))
    sleep(1)
    

#Repetir

