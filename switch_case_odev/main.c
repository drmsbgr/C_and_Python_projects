#include <stdio.h>

int main()
{
    float sayi1,sayi2=0;
    char op=' ';

    printf("operaturu gir (+,-,*,/): ");
    scanf("%c",&op);

    if (!(op == '+' || op == '-' || op == '*' || op == '/'))
    {
        printf("Kosullar disinda bir operator girdiniz.");
        return 0;
    }

    printf("sayi gir: ");
    scanf("%f",&sayi1);
    printf("sayi gir: ");
    scanf("%f",&sayi2);

    float res = 0;

    switch (op)
    {
        case '+':
            res = sayi1+sayi2;
        break;
        case '-':
            res = sayi1-sayi2;
        break;
        case '/':
            res = sayi1/sayi2;
        break;
        case '*':
            res = sayi1*sayi2;
        break;
    }

    printf("%f %c %f = %f",sayi1, op, sayi2, res);
    return 0;
}
