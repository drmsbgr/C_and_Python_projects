#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");
    int adet;

    printf("Adet giriniz\n->");
    scanf("%d", &adet);
    system("cls");

    int toplam = 0;

    for (int i = 0; i < adet; i++)
    {
        int sayi;
        printf("%d. sayiyi giriniz\n->", i + 1);
        scanf("%d", &sayi);
        toplam += sayi;
    }

    system("cls");

    float ort = (float)toplam / adet;

    printf("Girilen %d adet sayinin ortalamasi: %f", adet, ort);
}