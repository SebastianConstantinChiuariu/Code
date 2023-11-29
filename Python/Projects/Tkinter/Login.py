import tkinter as tk
from tkinter import ttk

#The Creation of the Window
window=tk.Tk()
#Personalazing the Window
window.title('NEO Suite')
window.geometry('768x538')
window.configure(background='#3d6466')


#Creating and config a Label
Introduction = ttk.Label (master = window, text = 'Hello!',font = 'Cabin 32 bold', foreground='white', background='#3d6466', padding='20')
Introduction.pack()

frame = ttk.Frame(master = window)
frame.configure(borderwidth='3', padding='2')
entry = ttk.Entry(master= frame, background= 'black', textvariable='Sign Up', font='SansSerif 12 bold')
button = ttk.Button(master = frame, text='')
frame.pack()
entry.pack()
button.pack(padx='20',pady='4')



























window.mainloop()


