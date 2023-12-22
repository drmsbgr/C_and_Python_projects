#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char dizgi[50];
    printf("bir metin girin ->");
    fgets(dizgi, sizeof(dizgi), stdin);

    int enUzun = 0;

    int sp = 0;

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (dizgi[i] == ' ' || i == strlen(dizgi) - 1)
        {
            if (sp > enUzun)
                enUzun = sp;
            sp = 0;
        }
        else
            sp++;
    }

    printf("en uzun kelimenin uzunlugu: %d", enUzun);

    return 0;
}