from os import system
import time
import random


def Menu():
        print("bye")

system('clear')
arcade = """        NEO Arcade
    __________________
                
    1. Guess the Number
    2. Rock Paper Scissors        
    3. Exit
        """
for i in arcade:
                print(i, end="", flush = True)
                time.sleep(0.05)
arcadeinput = input("\n    Selection: ")
match arcadeinput:
                case "1":
                    system('clear')
                    gnumber = """      Guess the Number
    ____________________
                
 - Guess the random number between 0 - 10"""
                    for i in gnumber:
                        print(i, end="", flush = True)
                        time.sleep(0.05)
                    numtry = 1
                    randnumber = random.randint (0,10)
                    while True:
                        tries = 0
                        try:
                            trynumber = int(input("\n - Insert a number: "))
                                                 
                           
                        except:
                            print("\n You must input a Number (0 - 10)")
                            time.sleep(2)
                            system('clear')
                            print("""      Guess the Number

    ____________________
                
 Guess the random number between 0 - 10""")
                    
                        if trynumber == randnumber:
                            print("\n - The inserted Number [ {} ] is Correct \n - Congratulations".format(trynumber))
                            if numtry >= 4:
                                time.sleep(1)
                                print("\n (Someone) - {} tries??, I'm Better :/ ")
                            time.sleep(5)
                            Menu()
                        elif trynumber >= randnumber:
                            print("\n - The inserted Number [ {} ] is Shorter, {} tries".format(trynumber,numtry))
                            numtry += 1
                            time.sleep(3)
                            False
                        elif trynumber <= randnumber:
                            print("\n - The inserted Number [ {} ] is Bigger, {} tries".format(trynumber,numtry))
                            numtry += 1 
                            time.sleep(3)
                            False
                        elif trynumber >= 10:
                            print("\n - The inserted Number [ {} ] is more than allowed, {} tries".format(trynumber,numtry))
                            time.sleep(3)
                            False
                        
