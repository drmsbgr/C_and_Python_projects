#include <stdio.h>

float F(float x)
{
    return 15 - x;
}

void DiziYazdir(float *dizi, int boyut)
{
    printf("{");

    for (int i = 0; i < boyut; i++)
    {
        if (i == boyut - 1)
            printf("%.2f", dizi[i]);
        else
            printf("%.2f, ", dizi[i]);
    }

    printf("}");
}

int main()
{
    int n = 11;
    float y[n];

    // 1     0
    // 11    10

    for (int i = 0; i < n; i++)
        y[i] = F(10 - i);

    DiziYazdir(y, n);
    return 0;
}