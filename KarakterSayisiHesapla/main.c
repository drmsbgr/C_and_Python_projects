#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("yaziyi girin\n->");
    fgets(str, sizeof(str), stdin);

    printf("karakter sayisi: %d", strlen(str));

    return 0;
}