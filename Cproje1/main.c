#include <stdio.h>
#include <conio.h>

int main()
{
    int a=0;

    int sonuc = 1;

    printf("faktoriyeli alinacak sayiyi girin: ");

    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
        sonuc *= i;

    system("cls");
    printf("%d! = %d\n",a,sonuc);
    return 0;
}