#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 6

void DiziYazdir(int *dizi, int boyut);

int ElemanlariTopla(int *dizi, int boyut)
{
    int toplam = 0;

    for (int i = 0; i < boyut; i++)
        toplam += dizi[i];

    return toplam;
}

void AzalanSekildeSirala(int *dizi, int boyut)
{
    for (int i = 0; i < boyut - 1; i++)
    {
        if (dizi[i] > dizi[i + 1])
        {
            // yerlerini değiştir ve döngüyü başa sar
            int yedek = dizi[i];
            dizi[i] = dizi[i + 1];
            dizi[i + 1] = yedek;
            i = 0;
        }
    }
}

void TekCiftAyir(int *dizi, int boyut)
{
    printf("Ciftler\n");
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] % 2 == 0)
            printf("%d ", dizi[i]);
    }

    printf("\nTekler\n");
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] % 2 == 1)
            printf("%d ", dizi[i]);
    }
}

void TersCevir(int *dizi, int boyut)
{
    for (int i = 0; i < boyut / 2; i++)
    {
        int k = dizi[i];
        dizi[i] = dizi[boyut - 1 - i];
        dizi[boyut - 1 - i] = k;
    }
}

float OrtalamaHesapla(int *dizi, int boyut)
{
    int toplam = ElemanlariTopla(dizi, boyut);
    return (float)toplam / boyut;
}

int EnBuyuk(int *dizi, int boyut)
{
    int k = dizi[0];

    for (int i = 1; i < boyut; i++)
    {
        if (dizi[i] > k)
            k = dizi[i];
    }

    return k;
}

int EnKucuk(int *dizi, int boyut)
{
    int k = dizi[0];

    for (int i = 1; i < boyut; i++)
    {
        if (dizi[i] < k)
            k = dizi[i];
    }

    return k;
}

int ElemanlariCarp(int *dizi, int boyut)
{
    int carpim = 1;

    for (int i = 0; i < boyut; i++)
        carpim *= dizi[i];

    return carpim;
}

int ElemanVarMi(int *dizi, int boyut, int hedef)
{
    int r = -1;

    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] == hedef)
        {
            r = hedef;
            break;
        }
    }

    return r;
}

int IndisBul(int *dizi, int boyut, int hedef)
{
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] == hedef)
            return i;
    }
}

int TekrarSayisiHesapla(int *dizi, int boyut, int hedef)
{
    int sayac = 0;
    for (int i = 0; i < boyut; i++)
    {
        if (dizi[i] == hedef)
            sayac++;
    }

    return sayac;
}

void TekrarlariBul(int *dizi, int boyut)
{
    int okunanlar[boyut];
    for (int i = 0; i < boyut; i++)
        okunanlar[i] = 0;

    int k = 0;

    for (int i = 0; i < boyut; i++)
    {
        if (ElemanVarMi(okunanlar, boyut, dizi[i]) == -1)
        {
            okunanlar[k] = dizi[i];
            printf("%d, %d kez tekrar etti\n", dizi[i], TekrarSayisiHesapla(dizi, boyut, dizi[i]));
        }
    }
}

void TekrarlardanYeniDizi(int *dizi, int boyut)
{
    int okunanlar[boyut];
    for (int i = 0; i < boyut; i++)
        okunanlar[i] = 0;

    int k = 0;

    for (int i = 0; i < boyut; i++)
    {
        if (ElemanVarMi(okunanlar, boyut, dizi[i]) == -1 && TekrarSayisiHesapla(dizi, boyut, dizi[i]) > 1)
        {
            okunanlar[k] = dizi[i];
            k++;
        }
    }
    printf("Tekrar etmis olan sayilardan olusan yeni dizi\n");
    DiziYazdir(okunanlar, k);
}

int IkiDiziTopla(int *dizi1, int *dizi2, int boyut)
{
    return ElemanlariTopla(dizi1, boyut) + ElemanlariTopla(dizi2, boyut);
}

void DiziYazdir(int *dizi, int boyut)
{
    printf("{");

    for (int i = 0; i < boyut; i++)
        if (i == boyut - 1)
            printf("%d", dizi[i]);
        else
            printf("%d, ", dizi[i]);

    printf("}");
}

int AsalMi(int sayi)
{
    if (sayi < 2)
        return -1;

    int r = sayi;

    for (int i = 2; i < sayi; i++)
    {
        if (sayi % i == 0)
            return -1;
    }

    return r;
}

void AsallariBul(int *dizi, int boyut)
{
    printf("Asallar\n");
    for (int i = 0; i < boyut; i++)
    {
        if (AsalMi(dizi[i]) != -1)
            printf("%d ", dizi[i]);
    }
}

void KareAl(int *dizi, int boyut)
{
    for (int i = 0; i < boyut; i++)
        dizi[i] = dizi[i] * dizi[i];
}

int main()
{
    srand(time(NULL));

    int dizi[BOYUT];

    for (int i = 0; i < BOYUT; i++)
        dizi[i] = rand() % 11;

    printf("dizi\n");
    for (int i = 0; i < BOYUT; i++)
        printf("%d ", dizi[i]);

    printf("\n\n");

    printf("Elemanlar toplami: %d\n\n", ElemanlariTopla(dizi, BOYUT));

    AzalanSekildeSirala(dizi, BOYUT);
    printf("siralanmis dizi\n");
    for (int i = 0; i < BOYUT; i++)
        printf("%d ", dizi[i]);

    printf("\n\n");
    TekCiftAyir(dizi, BOYUT);
    printf("\n\n");

    TersCevir(dizi, BOYUT);
    printf("ters cevrilmis dizi\n");
    for (int i = 0; i < BOYUT; i++)
        printf("%d ", dizi[i]);

    printf("\n\n");

    printf("Elemanlarin ortalamasi: %.2f\n\n", OrtalamaHesapla(dizi, BOYUT));

    printf("EnKucuk: %d, EnBuyuk: %d\n\n", EnKucuk(dizi, BOYUT), EnBuyuk(dizi, BOYUT));

    printf("Elemanlarin carpimi: %d\n\n", ElemanlariCarp(dizi, BOYUT));

    if (ElemanVarMi(dizi, BOYUT, 5) != -1)
        printf("dizi '5' elemaninini iceriyor\n\n");
    else
        printf("dizi '5' elemaninini icermiyor\n\n");

    printf("Tekrarlar\n");
    TekrarlariBul(dizi, BOYUT);

    TekrarlardanYeniDizi(dizi, BOYUT);

    printf("\n\n");

    int ekDizi[6] = {10, 12, 3, 5, 6, 4};

    DiziYazdir(ekDizi, BOYUT);
    printf("\n+");
    DiziYazdir(dizi, BOYUT);
    printf("\n=");
    printf("%d", IkiDiziTopla(ekDizi, dizi, BOYUT));
    printf("\n\n");

    AsallariBul(dizi, BOYUT);

    printf("\n\n");
    int yeniDizi[BOYUT];

    for (int i = 0; i < BOYUT; i++)
        yeniDizi[i] = dizi[i];

    KareAl(yeniDizi, BOYUT);

    printf("Kare alinmis dizi\n");
    DiziYazdir(yeniDizi, BOYUT);

    return 0;
}