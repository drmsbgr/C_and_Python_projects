dizgi1 = input("bir metin girin\n->")
dizgi2 = input("bir metin girin\n->")

benzerlikOrani = sum(
    100 / len(dizgi1) for i in range(len(dizgi1)) if dizgi1[i] == dizgi2[i]
)
print(f"benzerlik orani {benzerlikOrani}")
