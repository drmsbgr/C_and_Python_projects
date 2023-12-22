def F(x):
    return 10 - (x / 3)


y = [F(0.5 * x - 2) for x in range(9)]
print(y)
