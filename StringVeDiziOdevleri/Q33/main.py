n = int(input("bir sayi girin\n->"))

for i in range(n):
    for j in range(n):
        if j in [i, n - 1 - i]:
            print("*", end="")
        else:
            print(" ", end="")
    print("")
