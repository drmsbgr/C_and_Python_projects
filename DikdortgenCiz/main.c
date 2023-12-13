#include <stdio.h>

int max(int a, int b)
{
    int r = a;
    if (b > a)
        r = b;
    return r;
}

int main()
{
    int satir = 0, sutun = 0, kalinlik = 1;

    printf("satiri, sutunu ve kalinligi girin\n->");
    scanf("%d %d %d", &satir, &sutun, &kalinlik);

    for (int x = 0; x < satir; x++)
    {
        for (int y = 0; y < sutun; y++)
        {
            if ((y > max(kalinlik - 1, 0) && y < sutun - kalinlik - 1) && (x > max(kalinlik - 1, 0) && x < satir - kalinlik - 1))
                printf("  ");
            else
                printf("* ");
        }

        printf("\n");
    }
}