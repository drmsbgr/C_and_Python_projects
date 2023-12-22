#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dizgi1[50];
    char dizgi2[50];
    printf("bir metin girin ->");
    fgets(dizgi1, sizeof(dizgi1), stdin);
    printf("bir metin girin ->");
    fgets(dizgi2, sizeof(dizgi2), stdin);

    if (strlen(dizgi1) != strlen(dizgi2))
    {
        printf("metinler ayni boyutta olmalidir");
        exit(-1);
    }

    int benzerlik = 0;

    for (int i = 0; i < strlen(dizgi1) - 1; i++)
    {
        if (dizgi1[i] == dizgi2[i])
            benzerlik++;
    }

    float benzerlikOrani = benzerlik * 100 / (strlen(dizgi1) - 1);

    printf("iki metnin benzerligi: %.2f", benzerlikOrani);

    return 0;
}