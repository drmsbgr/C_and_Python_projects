#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");
    char dizgi[32];

    printf("Bir isim giriniz\n->");
    scanf("%s", &dizgi);

    system("cls");

    int adet;

    printf("Bir tamsayi giriniz\n->");
    scanf("%d", &adet);
    system("cls");

    for (int i = 0; i < adet; i++)
        printf("%s\n", dizgi);

    getch();
}