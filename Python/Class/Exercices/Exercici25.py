
print ("\n        Compatdor de Majuscules ")
print ("       _________________________")
"\n"

def Counter():
    a = list(Sentence)
    countermaj = 0
    for i in a:
        if i.isupper():
            countermaj = countermaj + 1
    if countermaj == 1:
        print ("\nThe Sentence Contain {} Capital Letter".format(countermaj))
    elif countermaj >= 1:
        print("\nThe Sentence Contains {} Capital Letters".format(countermaj))

Sentence = input ("\nInput a Sentence: ")
Counter()

