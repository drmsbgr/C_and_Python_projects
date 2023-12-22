dizgi = input("Bir dizgi girin ->")
altDizgi = input("Bir alt dizgi girin ->")

print(
    "dizgi, alt dizgiyi içerir."
    if dizgi.find(altDizgi) != -1
    else "dizgi, alt dizgiyi içermez"
)
