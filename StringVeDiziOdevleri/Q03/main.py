dizgi = input("Bir dizgi girin\n->")

sesliHarfler = ["a", "e", "i", "o", "u"]

for c in sesliHarfler:
    dizgi = dizgi.replace(c, c.upper())

print(dizgi)
