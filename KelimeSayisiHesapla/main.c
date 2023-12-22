#include <stdio.h>

int main()
{
    char str[100];

    printf("yaziyi girin\n->");
    fgets(str, sizeof(str), stdin);

    int kelimeSayisi = 0;
    int b = 0;

    for (int i = 0; i < 100; i++)
    {
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && b == 0)
        {
            b = 1;
            kelimeSayisi++;
        }
        else if (str[i] != ' ')
        {
            b = 0;
        }
    }

    printf("kelime sayisi: %d", kelimeSayisi);

    return 0;
}