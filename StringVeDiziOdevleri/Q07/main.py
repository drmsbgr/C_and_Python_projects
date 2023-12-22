dizgi = input("Bir dizgi girin\n->")

for c in dizgi:
    if c == " ":
        print("")
    else:
        print(c, end="")
