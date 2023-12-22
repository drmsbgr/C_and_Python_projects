dizgi = input("Bir dizgi girin\n->")

sayac = sum(1 for c in dizgi if c.isspace())

print(sayac)
