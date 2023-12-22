dizgi = input("bir metin girin\n->")

s = "".join(c.lower() if c.isupper() else c.upper() for c in dizgi)
print(s)
