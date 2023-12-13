#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int nums[20];

    for (int i = 0; i < 20; i++)
    {
        int r = rand() % 101;
        nums[i] = r;
    }

    int kucuk = 999;
    int buyuk = 0;
    for (int i = 0; i < 20; i++)
    {
        if (nums[i] < kucuk)
            kucuk = nums[i];

        if (nums[i] > buyuk)
            buyuk = nums[i];
    }

    for (int i = 0; i < 20; i++)
    {
        if (nums[i] == kucuk)
            printf("ENKUCUK\t%d\n", nums[i]);
        else if (nums[i] == buyuk)
            printf("ENBUYUK\t%d\n", nums[i]);
        else
            printf("%d\n", nums[i]);
    }

    return 0;
}