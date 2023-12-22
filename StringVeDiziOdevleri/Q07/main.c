#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (dizgi[i] == ' ')
            dizgi[i] = '\n';
    }

    printf("%s", dizgi);

    return 0;
}