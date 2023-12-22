dizgi = input("bir metin girin\n->")

s = " ".join(kelime.capitalize() for kelime in dizgi.split())

print(s)
