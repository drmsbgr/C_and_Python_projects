#include <stdio.h>

int EnBuyukDegeriBul(int *diziPTR, int boyut)
{
    int b = 0;

    for (int i = 0; i < boyut; i++)
    {
        if (diziPTR[i] > b)
            b = diziPTR[i];
    }

    return b;
}

int main()
{
    int dizi[] = {5, 99, 100, 23, 320, 15};
    int bd = EnBuyukDegeriBul(dizi, sizeof(dizi) / sizeof(int));
    printf("En buyuk deger: %d", bd);
    return 0;
}