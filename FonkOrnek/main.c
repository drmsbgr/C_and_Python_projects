#include <stdio.h>

int KontrolEt(int girdi)
{
    return girdi % 2 == 0 ? 1 : 0;
}

int main()
{
    int sayi = 0;
    printf("bir sayi girin\n->");
    scanf("%d", &sayi);

    int cikti = KontrolEt(sayi);

    printf("%d", cikti);
    return 0;
}