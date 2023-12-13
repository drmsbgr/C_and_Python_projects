#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("karakter girin\n->");
    char c = ' ';
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("girilen karakter bir harf\n");

        if (islower(c))
            printf("girilen karakter küçük bir harf\n");
    }
    else
    {
        if (isdigit(c))
            printf("girilen karakter bir sayi\n");
    }

    return 0;
}