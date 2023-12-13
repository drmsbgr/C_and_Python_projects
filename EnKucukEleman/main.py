import random

sayilar = []

for i in range(20):
    sayilar.append(random.randint(0, 100))
    print(sayilar[i])

enKucuk = sayilar[0]
enBuyuk = 0

for i in range(20):
    if sayilar[i] < enKucuk:
        enKucuk = sayilar[i]

    if sayilar[i] > enBuyuk:
        enBuyuk = sayilar[i]

print(f"EnKucuk:{enKucuk}")
print(f"EnBuyuk:{enBuyuk}")
