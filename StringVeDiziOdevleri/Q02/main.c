#include <stdio.h>
#include <string.h>

int main()
{
    char dizgi[50];
    char altDizgi[50];

    printf("Bir dizgi girin ->");
    scanf("%s", dizgi);

    printf("Iceriginde kontrol edecek alt metni girin ->");
    scanf("%s", altDizgi);

    char *k = strstr(dizgi, altDizgi);

    if (k != NULL)
        printf("%s, %s icinde bulunmaktadir.", altDizgi, dizgi);
    else
        printf("Metin, alt metni icermemektedir.");

    return 0;
}