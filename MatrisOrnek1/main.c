#include <stdio.h>

int main()
{
    int m1[2][3] = {{2, 3, 4}, {5, 6, 7}};
    int m2[2][3] = {{1, -1, 2}, {3, 4, 5}};
    int mt[2][3];

    printf("Matris1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", m1[i][j]);
        printf("\n");
    }
printf("\n");
    printf("Matris2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", m2[i][j]);
        printf("\n");
    }
printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            mt[i][j] = m1[i][j] + m2[i][j];
    }
printf("\n");
    printf("Matrislerin toplami\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", mt[i][j]);
        printf("\n");
    }

    return 0;
}