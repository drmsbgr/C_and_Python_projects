#include <stdio.h>

struct Ogrenci
{
    float vize, final, ortalama;
};

float OrtalamHesapla(struct Ogrenci *ogr)
{
    return ogr->vize * .4 + ogr->final * .6;
}

int main()
{
    int adet = 0;

    printf("Ogrenci adetini giriniz\n->");
    scanf("%d", &adet);

    struct Ogrenci ogrenciler[adet];

    for (int i = 0; i < adet; i++)
    {
        printf("Ogrenci #%d icin vize ve final notunu giriniz\n->", i + 1);

        struct Ogrenci ogr;

        scanf("%f %f", &ogr.vize, &ogr.final);

        ogr.ortalama = OrtalamHesapla(&ogr);

        ogrenciler[i] = ogr;
    }

    for (int i = 0; i < adet - 1; i++)
    {
        if (ogrenciler[i].ortalama > ogrenciler[i + 1].ortalama)
        {
            // yerlerini değiştir ve döngüyü başa sar
            struct Ogrenci yedek = ogrenciler[i];
            ogrenciler[i] = ogrenciler[i + 1];
            ogrenciler[i + 1] = yedek;
            i = 0;
        }
    }

    printf("\nSIRALANMIS BILGILER\n");
    printf("-----------------------------------------\n");
    printf("VIZE\tFINAL\tORTALAMA\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < adet; i++)
    {
        struct Ogrenci ogr = ogrenciler[i];
        printf("%.2f\t%.2f\t%.2f\n", ogr.vize, ogr.final, ogr.ortalama);
    }

    return 0;
}