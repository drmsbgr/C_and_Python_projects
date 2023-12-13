#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int dizi[30];

    for (int i = 0; i < 30; i++)
        dizi[i] = rand() % 1001;

    int toplam = 0;
    int sayac = 0;

    for (int i = 0; i < 30; i++)
    {
        if (dizi[i] % 10 == 0)
        {
            toplam += dizi[i] * dizi[i];
            sayac++;
        }
    }

    if (sayac == 0)
        exit(-1);

    float ortalama = (float)toplam / sayac;

    for (int i = 0; i < 30; i++)
    {
        if (dizi[i] % 10 == 0)
            printf("*%d\n", dizi[i]);
        else
            printf("%d\n", dizi[i]);
    }

    printf("Ortalama: %.2f", ortalama);

    return 0;
}