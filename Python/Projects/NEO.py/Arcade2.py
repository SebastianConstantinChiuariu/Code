from os import system
import time
import random



def ReptwoArcade():
    print("\n Another Match? (Y/n)")
    rep = input("\n - You:")
    if rep == "Y":
        False
    if rep == "n":
        Menu()
    else:
        print("- Wrong Answer")

def Results():
    system('clear')
    time.sleep(0.5)
    results = ("""      Results of the Match
    ________________________""")
    
    for i in results:
        print(i, end = "", flush = True)
        time.sleep(0.04)


system('clear')
gnumber = """      Rock Paper Scissors
    _______________________"""
players = ("""    
    
    [ Players ]

    · Bot
    - You""")
for i in gnumber:
    print(i, end="", flush = True)
    time.sleep(0.05)
for i in players:
    print(i, end = "", flush = True)
    time.sleep(0.08)

time.sleep(2)
system('clear')
print(gnumber)
      
tools = """ \n    | Objects |  
    
    1. Rock
    2. Paper
    3. Scissors
                    
                    """
for i in tools:
                        print(i, end="", flush = True)
                        time.sleep(0.03)
                    
randpc = random.randint(1,3)
while True:

                       
                        
    object = int(input("\n    - You: "))

    if object >= 4 or object <=0:                                           
        print("\n You must input a Number (1 - 3)")
        time.sleep(2)
        system('clear')
        print("""      Rock Paper Scissors
        
        ______________________
                    
    Try to fight Python to this game
    
    1. Rock
    2. Paper
    3. Scissors""")
    False

    if object == randpc:
        Results()
        print("\n\n              Tie")
        print ("\n Bot: Dont copy me :/ ")
        time.sleep(1.5)
        ReptwoArcade()
    elif object == 1 and randpc == 3 or object == 2 and randpc == 1 or object == 3 and randpc == 2:
        Results()
        print("\n\n            You Win")
        print("\n Bot: Well played :(")  
        time.sleep(1.5)
        ReptwoArcade()
    else:
        Results()
        print("\n\n           You Lose")
        print("\n Bot: Loseeer ;)")   
        time.sleep(1.5)
        ReptwoArcade() 
                 