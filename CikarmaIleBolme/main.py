sonuc = 0
a = int(input("buyuk sayiyi gir"))
b = int(input("kucuk sayiyi gir"))
kalan = a

while kalan >= b:
    kalan -= b
    sonuc+=1

print(f"{a}/{b}={sonuc} Kalan: {kalan}")