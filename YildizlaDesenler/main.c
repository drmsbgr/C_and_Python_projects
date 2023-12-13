#include <stdio.h>

int main()
{
    int row = 0;

    printf("satir sayisini gir\n->");
    scanf("%d", &row);
    /*
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < i + 1; j++)
                printf("* ");
            printf("\n");
        }

        printf("\n");

        for (int i = row; i >= 1; i--)
        {
            for (int j = 0; j < i + 1; j++)
                printf("* ");
            printf("\n");
        }
    */
    int k = 2 * row - 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (j >= row - i + 1 && j <= i + 2)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    for (int i = row; i >= 0; i--)
    {
        for (int j = 0; j < k; j++)
        {
            if (j >= row - i + 1 && j <= i + 2)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
}