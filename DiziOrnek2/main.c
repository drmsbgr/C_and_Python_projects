#include <stdio.h>
#include <string.h>

int main()
{
    char ad[32];
    char soyad[32];
    char adsoyad[67] = "";

    printf("adinizi girin\n->");
    scanf("%s", &ad);

    printf("soyadinizi girin\n->");
    scanf("%s", &soyad);

    strcat(adsoyad, ad);
    strcat(adsoyad, soyad);

    printf("ad soyad: %s\n", adsoyad);
    printf("uzunluk: %d", strlen(adsoyad));

    return 0;
}