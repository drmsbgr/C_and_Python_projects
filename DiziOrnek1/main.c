#include <stdio.h>

int main()
{
    int sayilar[10];

    for (int i = 1; i <= 10; i++)
    {
        sayilar[i - 1] = i * i;
        printf("%d ", sayilar[i-1]);
    }

    return 0;
}