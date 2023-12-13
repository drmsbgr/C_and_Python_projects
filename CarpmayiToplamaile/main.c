#include <stdio.h>

int main()
{
    int sonuc =0;

    int a,b;

    printf("iki sayi gir\n->");
    scanf("%d %d",&a,&b);

    for (int i = 0; i < a; i++)
        sonuc += b;

    printf("\nSonuc: %d",sonuc);
    
}