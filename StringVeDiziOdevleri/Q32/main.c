#include <stdio.h>

float F(float x)
{
    return 10 - (x / 3);
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
    int n = 9;
    float y[n];

    // 0    -2
    // 8     2
    // i     ?

    for (int i = 0; i < n; i++)
        y[i] = F(.5 * i - 2);

    DiziYazdir(y, n);
    return 0;
}