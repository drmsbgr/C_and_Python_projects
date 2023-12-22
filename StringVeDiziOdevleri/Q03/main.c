#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("Bir dizgi girin\n->");
    fgets(dizgi, sizeof(dizgi), stdin);

    char sesliHarfler[] = "aeiou";

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (strchr(sesliHarfler, dizgi[i]) != NULL)
            dizgi[i] = toupper(dizgi[i]);
    }

    printf("%s", dizgi);

    return 0;
}