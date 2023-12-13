#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rastgeleSayi = rand();
    int deger = rastgeleSayi % 1000 + 1; // 1-1000 arası

    int tahmin = 0;
    printf("1-1000 arasindan rastgele bir sayi secildi.\nHadi bu sayiyi bulmaya calis.\nIlk tahminini gir\n->");

    do
    {
        scanf("%d", &tahmin);

        if (tahmin == deger)
        {
            printf("Tebrikler sayiyi buldun\nYeniden oynamak ister misin? (e/h) ->");
            char c;
            scanf("\n%c", &c);

            if (c == 'E' || c == 'e')
                main();
            else
                exit(0);
        }
        else if (tahmin > deger)
            printf("Cok yuksek. Yeni bir tahmin yap\n->");
        else if (tahmin < deger)
            printf("Cok dusuk. Yeni bir tahmin yap\n->");

    } while (tahmin != deger);

    return 0;
}