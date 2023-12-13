#include <stdio.h>

int main()
{
    int ciftToplam = 0, tekToplam = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d.sayi: ", i + 1);
        int s;
        scanf("%d", &s);

        if (s % 2 == 0)
            ciftToplam += s;
        else
            tekToplam += s;
    }

    float oran = (float)ciftToplam / tekToplam;

    printf("oran : %f", oran);
}