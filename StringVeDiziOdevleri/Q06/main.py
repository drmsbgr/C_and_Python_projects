dizgi = input("Bir dizgi girin\n->")

rakamS = sum(1 for c in dizgi if c.isdigit())
harfS = sum(1 for c in dizgi if c.isalpha())

print(f"rakam sayisi: {rakamS}, harf sayisi: {harfS}")
