#include <stdio.h>
#include <stdlib.h>

int main()
{
    //0-1 arası rastgele sayı
    float s = 30.0;
    int rastgele = rand();
    int aralik = rastgele % (int)s + 1;

    float deger = aralik / s;

    printf("sayi: %f",deger);
}