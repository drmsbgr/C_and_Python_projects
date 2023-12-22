def F(x):
    return x**3 + 5


# 0  0
# 21 5

y = [F((5 / 21) * x) for x in range(22)]
print(y)
