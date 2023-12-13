#include <stdio.h>
#include <math.h>

const float hataPayi = 1.125f;

int main()
{
    int r = 0;

    printf("yaricapi gir:\n->");
    scanf("%d", &r);

    for (int x = 0; x <= 2 * r; x++)
    {
        for (int y = 0; y <= 2 * r; y++)
        {
            /*if (y > r)
                continue;
            çemberin ortadan sağ kısmını yazmaz */

            float mesafe = pow(pow(x - r, 2) + pow(y - r, 2), .5f);

            if (mesafe <= r + hataPayi && mesafe >= r - hataPayi)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}