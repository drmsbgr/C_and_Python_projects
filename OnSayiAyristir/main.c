#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    int sayilar[10];

    for (int i = 0; i < 10; i++)
    {
        system("cls");
        printf("%d. sayiyi giriniz\n->",i+1);
        scanf("%d",&sayilar[i]);
    }

    system("cls");

    int yuz_ikiyuz_arasi_adet = 0;
    int yuzden_kucuk_toplam = 0;

    int dordeBolunenler[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    bool diziDegistiMi = false;
    int diziIndex = 0;
    
    for (int i = 0; i < 10; i++)
    {
        if (sayilar[i] < 200 && sayilar[i] > 100)
        {
            yuz_ikiyuz_arasi_adet++;   
        }
        else if (sayilar[i] < 100)
        {
            yuzden_kucuk_toplam += sayilar[i];
        }
        else if (sayilar[i] > 200)
        {
            if (sayilar[i] % 4 == 0)
            {
                dordeBolunenler[diziIndex] = sayilar[i];
                diziIndex++;
                if (!diziDegistiMi)
                    diziDegistiMi= true;
            }               
        }
    }

    if (diziDegistiMi)
    {
        printf("200'den buyuk dorde bolunebilen sayilar\n\n");

        for (int i = 0; i < 10; i++)
        {
            if (dordeBolunenler[i] != -1)
                printf("-%d\n",dordeBolunenler[i]);            
        }
        
    }
    else
        printf("200'den buyuk dorde bolunebilen sayi yok.");    

    printf("\n100-200 arasi sayi adedi: %d\n",yuz_ikiyuz_arasi_adet);
    printf("100'den kucuk sayilarin toplami: %d\n",yuzden_kucuk_toplam);   
    
}