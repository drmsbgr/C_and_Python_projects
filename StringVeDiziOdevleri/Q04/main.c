#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("sayi iceren bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int toplam = 0;

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (isdigit(dizgi[i]))
        {
            int x;
            char c[2] = "\0";
            c[0] = dizgi[i];
            sscanf(c, "%d", &x);
            toplam += x;
        }
    }

    printf("metnin icindeki sayilarin toplami: %d", toplam);

    return 0;
}