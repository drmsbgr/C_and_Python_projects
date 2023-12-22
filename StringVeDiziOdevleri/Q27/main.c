#include <stdio.h>

int F(int n)
{
    if (n == 0 || n == 1)
        return n;

    return F(n - 1) + F(n - 2);
}

void DiziYazdir(int *dizi, int boyut)
{
    printf("{");

    for (int i = 0; i < boyut; i++)
    {
        if (i == boyut - 1)
            printf("%d", dizi[i]);
        else
            printf("%d, ", dizi[i]);
    }

    printf("}");
}

int main()
{
    int n = 10;
    int dizi[n];

    printf("ilk %d fibanocci elemani\n", n);

    for (int i = 0; i < n; i++)
        dizi[i] = F(i);

    DiziYazdir(dizi, n);

    return 0;
}