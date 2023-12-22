n = int(input("bir sayi girin\n->"))


def absF(x):
    return x if x > 0 else -x


for i in range(n):
    if i in [0, n - 1]:
        for _ in range(int(absF(n / 2 + 1))):
            print("*", end="")
        print("")
        continue

    print("*", end="")
    for _ in range(int(absF((n / 2) - i))):
        print(" ", end="")
    print("*", end="")
    print("")
