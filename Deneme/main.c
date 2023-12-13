#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");

    int nums[4] = {12, 5, 9, 2};
    int *initial = nums;

    for (int i = 0; i < 4; i++)
    {
        int *p = initial + i;
        printf("%d. deger: %d\n", i + 1, *p);
    }

    return 0;
}