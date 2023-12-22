#include <stdio.h>

int F(int x)
{
    return x * x;
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
    int n = 11;
    int y[n];

    for (int i = 0; i < n; i++)
        y[i] = F(i - 5);

    DiziYazdir(y, n);

    return 0;
}