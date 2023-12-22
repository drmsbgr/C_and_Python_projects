#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    for (int i = 0; i < strlen(dizgi) - 1; i++)
    {
        if (isupper(dizgi[i]))
            dizgi[i] = tolower(dizgi[i]);
        else
            dizgi[i] = toupper(dizgi[i]);
    }

    printf("%s", dizgi);

    return 0;
}