#include <stdio.h>
#include <string.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int palindrom = 1;
    int boyut = strlen(dizgi)-1;

    for (int i = 0; i < boyut / 2; i++)
    {
        if (dizgi[i] != dizgi[boyut - 1 - i])
        {
            printf("%d", i);
            palindrom = -1;
            break;
        }
    }

    if (palindrom == 1)
        printf("metin palindromik");
    else
        printf("metin palindromik degil");

    return 0;
}