#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 10

int main()
{
    srand(time(NULL));
    int dizi[BOYUT];
    int dizi2[BOYUT];

    for (int i = 0; i < BOYUT; i++)
        dizi[i] = rand() % 41;

    for (int i = 0; i < BOYUT; i++)
        dizi2[BOYUT - i - 1] = dizi[i];

    printf("Normal\n");

    for (int i = 0; i < BOYUT; i++)
        printf("%d ", dizi[i]);

    printf("\n");
    printf("Ters\n");

    for (int i = 0; i < BOYUT; i++)
        printf("%d ", dizi2[i]);

    return 0;
}