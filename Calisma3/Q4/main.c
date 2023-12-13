#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int frekanslar[6] = {0, 0, 0, 0, 0, 0};

    srand(time(NULL));
    for (int i = 0; i < 6000; i++)
    {
        int yuzeGelenSayi = rand() % 6 + 1;
        frekanslar[yuzeGelenSayi - 1]++;
    }

    printf("YUZ\t\tFREKANS\n");

    for (int i = 0; i < 6; i++)
        printf("%d\t\t%d\n", i + 1, frekanslar[i]);

    return 0;
}