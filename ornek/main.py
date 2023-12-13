ciftToplam,tekToplam = 0,0

for i in range(1,11):
    s = int(input(f"{i}.sayiyi giriniz:"))
    if s % 2 == 0:
        ciftToplam += s
    else:
        tekToplam += s

oran = ciftToplam / tekToplam

print(f"oran: {oran}")