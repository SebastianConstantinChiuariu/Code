from os import system
import random
import time


def Add():
    system('clear')
    add = """        ADDING CONTACT
    _____________________"""
    print(add)

def add_contact():
            system('clear')
            add = """        ADDING CONTACT
    _____________________"""
            for i in add:
                print(i, end="", flush = True)
                time.sleep (0.04)
            
            # Contact Information 
            name = input("\n\n\n - Name: ")
            Add()
            lastname = input("\n\n - Last Name: ")
            Add()
            numtelf = input ("\n\n - Telephone: ")
            Add()
            kind = input("\n\n - Kind of Contact: ")
            Add()
            note = input("\n\n - Nickname: ")
            Add()
            print ("\n\n  Adding Contact")
            time.sleep(0.2)
            Add()
            print ("\n\n  Adding Contact.")
            time.sleep(0.2)
            Add()
            print ("\n\n  Adding Contact..")
            time.sleep(0.2)
            Add()
            print ("\n\n  Adding Contact...")
            time.sleep(0.8)
            Add()
            print ("\n\n  Contact Added.")
            time.sleep(1)
            Menu_diary()

def list_contact(name):
    system('clear')
    list = """        LIST CONTACTS
    _____________________"""
    for i in list:
        print(i, end="", flush = True)
        time.sleep (0.04)
    
    numcontacts = 0
    len(name)
    if name >= 1:
        numcontacts += 1
    
    print("\n - {} Contatcs on Diary.")
    z = input(" - Enter (Y/n): ")
    if z == "Y":
        True
    if z == "n":
        Menu_diary()
        

def Menu_diary():
    system('clear')
    ofi = """           DIARY
    __________________
            
    1. Add New Contact
    2. List Existing Contact
    3. Delete Contact
    4. Exit"""

    for i in ofi:
        print(i, end="", flush = True)
        time.sleep (0.05)

    select_diary = int(input("\n\n - You: "))
    match select_diary:
        case 1:
            add_contact()

Menu_diary()
    

