#include <stdio.h>

int main()
{
    int m1[2][3] = {{2, 3, 4}, {5, 6, 7}};
    int m2[3][2] = {{1, -1}, {2, 3}, {4, 5}};
    int mT[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mT[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d\t", mT[i][j]);
        printf("\n");
    }

    return 0;
}