dizgi = input("bir metin girin\n->")

if dizgi == "".join(reversed(dizgi)):
    print("metin palindromik")
else:
    print("metin palindromik degil")
