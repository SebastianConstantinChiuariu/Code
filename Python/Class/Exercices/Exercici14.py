
# Definir una funció que agafi un caràcter i retorni vertader si és una vocal i en cas contrari retorni fals. Prova-la amb diferents exemples.

from os import system
system('clear')
from time import sleep

#Menú Principal
inici=1
while (inici!=0):

    llista_menu = ["Vocal o Consonant","Diferenciador"]
    print("\n         Identificador de vocals\n\n")
    print("          1. Vocal o Consonant")
    print("       2. Diferenciador de ambdós")

    # Opció a escollir

    opcio = input("\n                  Opció: ") 

    # Opció 1

    if opcio == "1":
            
        def caracters (text):
                vocals = "a,e,i,o,u,A,E,I,O,U"

                return [i for i in text if i in vocals]

            
        system('clear')
        print("\n",llista_menu[0])
        text = input("\n Text: ")
        (caracters(text))

        if caracters(text):
            print("\n <",text,">, és una vocal")

        else:
            print("\n <",text,">, és un consonant")
            
        sleep(3)
        print("\n 1. Sortir al Menú")
            
        repetir = input("\n Opció")
        if repetir == "1":
            inici=1
        
    #Opció 2

    if opcio == "2":
        
        def caracters (text):
            vocals = "a,e,i,o,u,A,E,I,O,U,à,á,è,é,í,ò,ó,ú,Á,À,È,É,Í,Ò,Ó,Ú"

            return [i for i in text if i in vocals]

        def lletres (text):
            consonants = "q,w,r,t,y,p,ñ,l,k,j,h,g,f,d,s,z,x,c,v,b,n,m,Q,W,R,T,Y,P,Ñ,L,K,J,H,G,F,D,S,Z,X,C,V,B,N,M,"  

            return [i for i in text if i in consonants]  
        
        
        system('clear')
        print("\n",llista_menu[1])
        text = input("\n Text: ")
        print("\n Consonants:",len(lletres(text)))
        print("\n Vocals:",len(caracters(text)))

        sleep(3)
        print("\n 1. Sortir al Menú")
            
        repetir = input("\n Opció")
        if repetir == "1":
            inici=1



   



    


