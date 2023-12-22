def F(n):
    return n if n in [0, 1] else F(n - 1) + F(n - 2)


n = 10
dizi = [F(i) for i in range(n)]

print(f"ilk {n} fibonacci elemanlari\n{dizi}")
