#include <stdio.h>

int main()
{

    int sonuc = 0;

    int a, b;

    printf("Sayilari girin\n->");
    scanf("%d %d", &a, &b);

    int kalan = a;

    while (kalan >= b){
        kalan -=b;
        sonuc++;
    }

    printf("%d/%d=%d Kalan: %d", a, b, sonuc, kalan);
}