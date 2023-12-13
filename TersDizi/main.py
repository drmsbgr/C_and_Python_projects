import random

dizi = [random.randint(0, 40) for _ in range(10)]
dizi2 = [dizi[9 - i] for i in range(10)]
print("Normal")

for i in range(10):
    print(dizi[i], end=" ")

print("\n")

print("Ters")

for i in range(10):
    print(dizi2[i], end=" ")
# dizi.reverse()
