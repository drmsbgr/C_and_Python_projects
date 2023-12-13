import random

sayilar = []

print("Rastgele sayılar")

for i in range(30):
    sayilar.append(random.randint(20, 50))
    print(f"{i+1}.sayının ({sayilar[i]}) küpü = {sayilar[i]**3}")
