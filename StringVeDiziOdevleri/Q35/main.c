#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    printf("sayi girin\n->");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");

        printf("*");
        printf("\n");
    }

    return 0;
}