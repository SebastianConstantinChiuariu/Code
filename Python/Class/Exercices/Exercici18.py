from  os import system
from time import sleep

#Menú Principal
print("\n              Elements comuns")
print(" El programa cercara caracters repetits als textos")
a = input ("\nPrimer text:")
b = input ("\nSegon text:")

def superposicio(a,b):
        x = 0
        for e in a:
                x += b.count(e)
        if x>0:
                return [x,True]
        else:
                return [0,False]

c,d = superposicio(a,b)
if c==0:
        print("\nNo tenen res en comú")
elif c==1:
        print("\nLes llistes te",c,"cosa en comú")
else:
        print("\nLes llistes tenen",c,"coses en comú")
