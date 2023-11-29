from os import system
from time import sleep
import random
import time

def Start():
    #Animation with 'Mastermind' letters#
    system('cls')
    animation = 1
    mastermind = ('  MASTERMIND')
    space_bar = ('\n    ________________________________')
    print("\n")

    while animation!=0:

        for i in mastermind:
            print(i,end="  ", flush=True)
            sleep(0.15)
            if i == 'D':
                for i in space_bar:
                    print (i, end="")
                    animation = 0
            

def Menu():
    print("\n")
    play = ('          Press enter to Play')
    for i in play:
            print(i,end="", flush=True)
            sleep(0.080)            
    play = input("")
    if play == "":
        system('cls')
        sleep(1)
        buclemenu = 1
        while buclemenu!=0:
            system('cls')
            print("\n\n      M  A  S  T  E  R  M  I  N  D")
            print('    ________________________________')
            print("\nThis Game consists to Discover hiden Numbers")
            sleep(3)
            print("\nDo you want a DEMO?")
            demo = input ("\n - ")
            if demo == 'yes':
                Demo()
            elif demo == 'no':
                print (" - DEMO REJECTED. ")
                sleep(1.7)
                system('cls')
                Game()
            else:
                buclemenu = 0
                
        
        
def numbers():
    counter = 10
    easy1 = random.randint(1,10)
    easy2 = random.randint(1,10)
    easy3 = random.randint(1,10)
    intent = 0

def Game():
    intent = 0
    bucleGame = 1
    while bucleGame !=0:
        system('cls')
        intentwin = intent
        bars = ('\n    ___________________________________')
        easymast = ('\n\n   MASTERMIND GAME')
        for i in easymast:
            print(i, end=" ", flush=True)                
            sleep(0.1)
        for i in bars:
                print(i, end="", flush=True)
                sleep(0.011)
        print ("\n\n  - Try to guess the 4 hidden numbers",flush=True)
        print ("\n    _*_ _*_ _*_ _*_ ")
        player = input ("\n {} Tries | - ".format(intentwin))
                # variable intent            
        if player == "":
            intentwin += 1
        for i in player:
            leninput = len(i) 
            if i.isdigit():
                if leninput == 4:
                    dict (a = player[0], b = player[1], c = player[2], d = player[3])
                    print ("Your numbers are ",print(i, end=","))
                    sleep(2)

                elif leninput >= 4:
                    print ("The amount of numbers exceed that expected ({}).".format(player))
                    sleep(2.5)
                        
            elif i.islower():
                print("\n - Only Introduce Digits")
                sleep(2)
                bucleGame = 0
            
    # variable intent

    
    
    

def Demo():
    Demoword = ('\n   DEMO MASTERMIND')
    system('cls')
    for i in Demoword:
        print(i, end=" ", flush=True)
        sleep(0.1)
    print('\n     _________________________________')




#Programa Principal
Start()
sleep(1.5)
Menu()