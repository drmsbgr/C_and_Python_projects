#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    printf("sayi girin\n->");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n / 2 + 1; j++)
                printf("*");

            printf("\n");
            continue;
        }

        printf("*");

        for (int j = 0; j < abs((n / 2) - i); j++)
            printf(" ");
        printf("*");

        printf("\n");
    }

    return 0;
}