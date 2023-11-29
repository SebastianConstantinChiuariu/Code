from os import system
import time 
import random

def rep_randnumber():
    system('cls')
    print("""      Guess the Number
    ____________________
                            """)                   
                    
def exit():
    system ('cls')
    print("\n     Turning off machine...")
    time.sleep(2) 
    system('cls')
    time.sleep(1)
    start()

def start():
    system('cls') 
    start = input("\n Press Enter to Start")  
    Menu() 

def ReptwoArcade():
    print(" Another Match? (Y/n)")
    rep = input(" - You:")
    if rep == "Y":
        False
    if rep == "n":
        Menu()
    else:
        print("- Wrong Answer")
    
## Menú

def Menu():
    system('cls')
    menu = """\n           NEO_OS 
     __________________

    1. Numeric Development
    2. Diary
    3. Arcade
    4. Objectes
    5. Scrapping Pokemons
    6. Exit
    """
    for i in menu:
        print(i, end="", flush=True)
        time.sleep (0.04)
    time.sleep (1)
    menuinput = int(input("\n    Selection: "))

    match menuinput:
        case 1:
            def Numeric_development():
                system('cls')
                desenvolupament = """       NUMERIC ORDER
    ___________________"""
                for i in desenvolupament:
                    print(i, end="", flush = True)
                    time.sleep(0.05)
                
            def numbers():
                
                numbers_input = input('\n\nInsert the numbers separated by commas: ')
                numbers_list = [int(num) for num in numbers_input.split(',')]
                numbers_list.sort()
                system('cls')
                Numeric_development()
                print('\n\n - Sorted numbers:')
                for num in numbers_list:
                        print(num, end=' ', flush=True)
                        time.sleep(0.2)
                time.sleep(8)
                Menu()

            Numeric_development()
            numbers()

                

                
                
        case 2:
            
            def Menu_diary():
                contact = [0]
                def Add():
                    system('cls')
                    add = """        ADDING CONTACT
    ______________________"""
                    for i in add:
                        print(i, end="",flush=True)

                def add_contact():
                    system('cls')
                    add = """        ADDING CONTACT
    ______________________"""
                    for i in add:
                        print(i, end="", flush = True)
                        time.sleep (0.04)
                    # Contact Information 
                    name = input("\n\n - Name: ")
                    Add()
                    lastname = input("\n\n - Last Name: ")
                    Add()
                    numtelf = input ("\n\n - Telephone: ")
                    Add()
                    contact.append (name)
                    contact.append (lastname)
                    contact.append (numtelf)
                    Add()
                    print ("\n\n   Adding Contact")
                    time.sleep(0.2)
                    Add()
                    print ("\n\n   Adding Contact.")
                    time.sleep(0.2)
                    Add()
                    print ("\n\n   Adding Contact..")
                    time.sleep(0.2)
                    Add()
                    print ("\n\n   Adding Contact...")
                    time.sleep(0.8)
                    Add()
                    print ("\n\n   Contact Added.")
                    time.sleep(1)
                    Menu_diary()

                
                system('cls')
                dia = """           DIARY
    __________________
                
    1. Add New Contact
    2. Exit"""
                for i in dia:
                        print(i, end="", flush = True)
                        time.sleep(0.03)
                time.sleep (1)
                diaryinput = int(input("\n\n    Selection: "))
                match diaryinput:
                    case 1:
                        Add()
                        add_contact()

                    case 2:
                        exit()
        
            Menu_diary()
                            
                
        case 3:
            system('cls')
            arcade = """        NEO Arcade
    __________________
                
    1. Guess the Number
    2. Rock Paper Scissors
    3. Exit
    """
            for i in arcade:
                print(i, end="", flush = True)
                time.sleep(0.04)
            arcadeinput = input("\n    Selection: ")
            match arcadeinput:

                case "1":
                    system('cls')
                    gnumber = """      Guess the Number
    ____________________
                
    · Guess the number between 0 - 10"""
                    for i in gnumber:
                        print(i, end="", flush = True)
                        time.sleep(0.04)
                    numtry = 1
                    randnumber = random.randint (0,10)
                    while True:
                        system ('cls')
                        print("""      Guess the Number
    ____________________""")
                        tries = 0
                        try:
                            trynumber = int(input("\n - Insert a number: "))
                                                 
                           
                        except:
                            print("\n You must input a Number (0 - 10)")
                            time.sleep(2)
                            system('cls')
                            print("""      Guess the Number

    ____________________
                
 Guess the random number between 0 - 10""")
                            time.sleep(0.3)
                    
                        if trynumber == randnumber:
                            print("\n - The inserted Number [ {} ] is Correct \n - Congratulations".format(trynumber))
                            if numtry >= 4:
                                time.sleep(1)
                                print("\n (Someone) - I'm Better than you :/ ")
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
      
                case "2":

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
                            system('cls')
                            time.sleep(0.5)
                            results = ("""      Results of the Match
    ________________________""")
                        
                            for i in results:
                                print(i, end = "", flush = True)
                                time.sleep(0.02)


                        system('cls')
                        gnumber = """      Rock Paper Scissors
    _______________________"""
                        players = ("""    
                            
    [ Players ]

    · Bot
    - You""")
                        for i in gnumber:
                            print(i, end="", flush = True)
                            time.sleep(0.04)
                        for i in players:
                            print(i, end = "", flush = True)
                            time.sleep(0.03)

                        time.sleep(2)
                        system('cls')
                        print(gnumber)
                            
                        tools = """ \n    | Objects |  
                            
    1. Rock
    2. Paper
    3. Scissors"""
                        for i in tools:
                                                print(i, end="", flush = True)
                                                time.sleep(0.03)
                                            
                        randpc = random.randint(1,3)
                        while True:

                                            
                                                
                            object = int(input("\n    - You: "))

                            if object >= 4 or object <=0:                                           
                                print("\n You must input a Number (1 - 3)")
                                time.sleep(2.5)
                                system('cls')
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
                                time.sleep(1)
                                print ("\n     Bot: Dont copy me :/ ")
                                time.sleep(1.5)
                                ReptwoArcade()
                            elif object == 1 and randpc == 3 or object == 2 and randpc == 1 or object == 3 and randpc == 2:
                                Results()
                                print("\n\n            You Win")
                                print("\n      Bot: Well played :(")  
                                time.sleep(1.5)
                                ReptwoArcade()
                            else:
                                Results()
                                print("\n\n           You Lose")
                                print("\n      Bot: Loseeer ;)")   
                                time.sleep(1.5)
                                ReptwoArcade() 

                case "3":
                    system('cls')
                    Menu()


        case 4:
            class Animal:
                def __init__(self, especie, edat):
                    self.especie = especie
                    self.edat = edat
                def xerrar(self):
                        pass
                def mourem(self):
                        pass
                def quisoc(self):
                    print("Sóc un animal del tipus {}".format(self.especie))
            class Cavall(Animal):
                def xerrar(self):
                    print("El so que em caracterítza és: Íiiiii")
                def mourem(self):
                    print("Em moc trotant!")
            class Dofí(Animal):
                def xerrar(self):
                    print("El so que em caracterítza és: Txas!")
                def mourem(self):
                    print("Em moc nadant!")
            class Abella(Animal):
                def xerrar(self):
                    print("El so que em caracterítza és: Bzzzz!")
                def mourem(self):
                    print("Em moc volant")
                def picar(self):
                    print("Si em molestes et picaré!")
            class Humà(Animal):
                def __init__(self, especie, edat, nom):
                        super().__init__(especie, edat)
                        self.nom=nom
                def xerrar(self):
                    print("El so que em caracterítza és: la paraula Hola!")
                def mourem(self):
                    print("Em moc Caminant")
                def quisoc(self):
                        print("Sóc un humà i em dic {}".format(self.nom))
            class Fiet(Humà):
                def __init__(self, especie, edat, nom, pares):
                        super().__init__(especie, edat,nom)
                        self.pares=pares
                def nompares(self):
                        print("El me pare es diu {} i la meva mare {}".format(self.pares[0], self.pares[1]))
            class Centaure(Cavall, Humà):
                    def quisoc(self):
                        print("Sóc un centaure i sorgeix de {}".format(Centaure.__mro__))
            class Xou:
                    def quisoc(self):
                        print("Duck type, això és el que sóc")
                    def mourem(self):
                        print("Duck type, així em moc")
                    def xerrar(self):
                        print("Duck type, així xerr")
            f = [Humà("Humà",32,"Joan"), Cavall('mamífer', 10), Dofí('mamífer', 23), Abella('insecte', 1), Fiet("Humà",6,"Pau",("Joan","Luz")), Xou(), Centaure("Centaure",40,"Quiron")]
            for e in f:
                e.quisoc()
                e.mourem()
                e.xerrar()
                if type(e)==Fiet:
                        e.nompares()
                if type(e)==Abella:
                        e.picar()

        case 5:

            import requests
            system('cls')
            for i in range(10):
                    a = "https://pokeapi.co/api/v2/evolution-chain/"+str((i+1))
                    res=requests.get(a)
                    if res.status_code == 200:
                        dades = res.json()

                        print("El nom del pokémon és: {}".format(dades["chain"]["species"]["name"]))
                        for e in dades["chain"]["evolves_to"]:
                                print("Nom de la seva evolució: ", e["species"]["name"])
            else:
                    print("No hi ha dades.")
                    time.sleep(2)
                    Menu()
 
            
        case 6:
            exit()
                
        case other:
            print("\n - You must input a valid numbers")
            time.sleep(2)
            Menu()
                            
Menu()
 