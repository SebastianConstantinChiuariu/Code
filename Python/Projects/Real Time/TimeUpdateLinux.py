import datetime
import time
from os import system
bucle = 1
while bucle!=0:
    now = datetime.datetime.now()
    print (now.strftime(" %H:%M:%S"))
    time.sleep (1)
    system('cls')
    bucle = 1