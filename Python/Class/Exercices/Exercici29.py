
def llegir():
    noms = []
    a = 'a'
    while (a != "."):
        a = input ("Introdueix el Nom: ")
        if a != ".":
            noms.append(a)
    return noms

def ncp(noms,c):
    y = []
    x = 0 
    for e in noms:
        if e[0]==c:
            x += 1 
            y.append(e)
    print("El número de paraules que començen {} i {} Són {} ".format(c,x,y))
    
a = llegir()
c = input("Introdueix el carácter que voleu cercar")
ncp (a,c)