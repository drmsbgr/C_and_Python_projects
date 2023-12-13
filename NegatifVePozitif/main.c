#include <stdio.h>
#include <conio.h>

#define ADET 10

int main()
{
    int negatifAdet = 0, pozitifAdet = 0, negatifToplam = 0, pozitifToplam = 0;

    system("cls");
    
    for (int i = 0; i < ADET; i++)
    {
        printf("%d. sayiyi girin -> ", i + 1);
        int sayi;
        scanf("%d", &sayi);

        if (sayi == 0)
            continue;

        if (sayi < 0)
        {
            negatifAdet++;
            negatifToplam += sayi;
        }
        else
        {
            pozitifAdet++;
            pozitifToplam += sayi;
        }
    }
    system("cls");

    printf("NegatifAdet: %d, NegatifToplam:%d\n", negatifAdet, negatifToplam);
    printf("PozitifAdet: %d, PozitifToplam:%d\n", pozitifAdet, pozitifToplam);

}