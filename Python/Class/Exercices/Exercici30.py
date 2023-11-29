
def count_vowels ():
    x = list (text)

    a = 0
    e = 0
    i = 0
    o = 0
    u = 0

    if x == 'a':
        a += 1
    elif x == 'e':
        e += 1
    elif x == 'i':
        i += 1
    elif x == 'o':
        o += 1
    elif x == 'u':
        u += '1'
    
    print("La paraula conté {} a's, {} e's, {} i's, {} o's, ".format(a,e))




# Programa Principal

text = input("Introdueix el contingut: ")
print(count_vowels())