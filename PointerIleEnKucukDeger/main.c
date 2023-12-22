#include <stdio.h>

int *KucukDeger(int *dizi, int boyut);

int main()
{
    int dizi[5] = {90, 10, 5, 30, 102};
    int *kDeger = KucukDeger(dizi, 5);
    printf("En kucuk deger: %d", *kDeger);

    return 0;
}

int *KucukDeger(int *dizi, int boyut)
{
    int *kd;
    int a = 9999;
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] < a)
        {
            a = dizi[i];
            kd = &dizi[i];
        }
    }
    return kd;
}