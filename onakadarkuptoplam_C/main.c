#include <stdio.h>
#include <math.h>

int main()
{
    int toplam = 0;

    for (int i = 1; i <= 10; i++)
    {
        toplam += pow(i, 3);
    }

    printf("1 den 10 a kadar kuplerinin toplami : %d", toplam);
}