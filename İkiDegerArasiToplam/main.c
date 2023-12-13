#include <stdio.h>
#include <conio.h>

int min(int x1, int x2)
{
    int minNum = x1;

    if (x1 > x2)
        minNum = x2;

    return minNum;
}

int max(int x1, int x2)
{
    int maxNum = x1;

    if (x1 < x2)
        maxNum = x2;

    return maxNum;
}

int main()
{
    system("cls");
    int a = 0, b = 0;

    printf("Iki tamsayi giriniz.\n->");
    scanf("%d %d", &a, &b);

    int ciftToplam = 0;

    for (int i = min(a, b) + 1; i < max(a, b); i++)
    {
        if (i % 2 == 0)
            ciftToplam += i;
    }
    
    system("cls");

    printf("%d-%d arasi cift sayilarin toplami: %d", a, b, ciftToplam);
}