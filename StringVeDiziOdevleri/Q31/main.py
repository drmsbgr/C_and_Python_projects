def F(x):
    return 15 - x


y = [F(x) for x in range(10, -1, -1)]
print(y)
