#include <stdio.h>

#define true 1

int main()
{
    int sayi;

    printf("Bir tamsayi giriniz.\n->");

    scanf("%d", &sayi);

    int i;
    for (i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
        {
            printf("%d bir asal sayi degildir.", sayi);
            break;
        }
    }

    if (i == sayi)
    {
        printf("%d bir asal sayidir.", sayi);
    }
}