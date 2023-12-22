#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int sayac = 0;

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (isblank(dizgi[i]))
            sayac++;
    }

    printf("bosluk sayisi: %d", sayac);

    return 0;
}