import random


def ElemanToplami(liste: list[int]):
    return sum(liste)


def TekCiftYazdir(liste: list[int]):
    ciftler = ""
    tekler = ""
    for c in liste:
        if c % 2 == 0:
            ciftler += f"{c} "
        else:
            tekler += f"{c} "
    print("\nTekler:")
    print(tekler)
    print("\nÇiftler")
    print(ciftler, end="\n\n")


def OrtalamaAl(liste: list[int]):
    return ElemanToplami(liste) / len(liste)


def EnBuyuk(liste: list[int]):
    return sorted(liste)[-1]


def EnKucuk(liste: list[int]):
    return sorted(liste)[0]


def ElemanCarpimi(liste: list[int]):
    carpim = 1
    for x in liste:
        carpim *= x
    return carpim


def ElemanVarMi(liste: list[int], x: int):
    return x in liste


def IndisHesapla(liste: list[int], x: int):
    return liste.index(x)


def TekrarSayisiHesapla(liste: list[int], x: int):
    return liste.count(x)


def TekrarEdenElemanlariListele(liste: list[int]):
    okunanlar = []
    for x in liste:
        if ElemanVarMi(okunanlar, x) == False:
            okunanlar.append(x)
            print(f"{x}, {TekrarSayisiHesapla(liste, x)} kez tekrar etti")


def TekrarEdenElemanDizisi(liste: list[int]):
    okunanlar = []
    for x in liste:
        if ElemanVarMi(okunanlar, x) == False and TekrarSayisiHesapla(dizi, x) > 1:
            okunanlar.append(x)
    return okunanlar


def IkiDiziElemanlariniTopla(l1: list[int], l2: list[int]):
    return ElemanToplami(l1) + ElemanToplami(l2)


def AsalMi(x: int):
    return all(x % n != 0 for n in range(2, x))


def AsallariListele(liste: list[int], x: int):
    print("Asallar")

    for n in liste:
        if AsalMi(n):
            print(n)


def KareAl(liste: list[int]):
    return [item**2 for item in liste]


dizi = [random.randint(0, 9) for _ in range(10)]

print(dizi)

print(f"Elemanlarin toplami: {ElemanToplami(dizi)}")
print(f"azalan sıra: {sorted(dizi)[::-1]}")
TekCiftYazdir(dizi)
print(f"ters sıra: {dizi[::-1]}")
print(f"Ortalama: {OrtalamaAl(dizi)}")
print(f"En Buyuk: {EnBuyuk(dizi)}, En Kucuk: {EnKucuk(dizi)}")
print(f"Elemanlarin Çarpımı: {ElemanCarpimi(dizi)}")
print(f"Dizi '5' elemanını içeriyor mu?: {ElemanVarMi(dizi, 5)}")
TekrarEdenElemanlariListele(dizi)
print(TekrarEdenElemanDizisi(dizi))
dizi2 = [5, 4, 3, 2, 3, 5, 7, 3, 1, 0]
print(f"{dizi2} ile toplam: {IkiDiziElemanlariniTopla(dizi,dizi2)}")
print(KareAl(dizi))
