#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x1 = 10;
    int x2 = 7;

    printf("x1:%d\tx2:%d\n", x1, x2);

    swap(&x1, &x2);

    printf("x1:%d\tx2:%d\n", x1, x2);

    return 0;
}

void swap(int *a, int *b)
{
    int k = *a;
    *a = *b;
    *b = k;
}