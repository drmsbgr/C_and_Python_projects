#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int rakamS = 0;
    int harfS = 0;

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (isalpha(dizgi[i]))
            harfS++;
        if (isdigit(dizgi[i]))
            rakamS++;
    }

    printf("rakam sayisi: %d, harf sayisi: %d", rakamS, harfS);

    return 0;
}