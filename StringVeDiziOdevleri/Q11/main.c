#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int ilkHarfteMi = 1;

    for (int i = 0; i < strlen(dizgi) - 1; i++)
    {
        if (dizgi[i] == ' ' || dizgi[i] == '\n' || dizgi[i] == '\t')
            ilkHarfteMi = 1;
        else
        {
            if (ilkHarfteMi == 1)
            {
                dizgi[i] = toupper(dizgi[i]);
                ilkHarfteMi = 0;
            }
        }
    }

    printf("%s", dizgi);

    return 0;
}