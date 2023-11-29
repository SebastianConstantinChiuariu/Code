
def llegir():
    llista = []
    a = 'a'
    while (a!='.'):   # "!=" és igual a diferent
        a = input("Introdueix u numero: ")
        if a!='.':
            llista.append[int(a)] # Aquí es guarda el valor que s'ha introduit dins "llista".
    return tuple (llista)

def majors_que(a,num):
    for e in a:
        if e>num:
            print(e)
        
# programa

x = llegir()
i = input("Introdueix el numero per a comparar: ")
majors_que(x,int(i))
