#include <stdio.h>

float F(float x)
{
    return x * x * x + 5;
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
    int n = (5 - 0) / 0.25 + 1;
    float y[n];

    // 0    0
    // n-1  5

    for (int i = 0; i < n; i++)
    {
        float x = (5 / ((float)n - 1)) * (float)i;
        y[i] = F(x);
    }

    DiziYazdir(y, n);

    return 0;
}