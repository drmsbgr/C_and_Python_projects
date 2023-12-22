dizgi = input("Bir dizgi girin\n->")
hedefKarakter = input("Aranacak karakteri girin\n->")
sayac = sum(1 for c in dizgi if c == hedefKarakter)

print(f"Dizgi içinde geçen '{hedefKarakter}' karakter sayısı: {sayac}")
