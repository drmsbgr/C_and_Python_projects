#include <stdio.h>
#include <conio.h>

int min(int x1, int x2)
{
    int minNum = x1;

    if (x1 > x2)
        minNum = x2;
    
    return minNum;
}

int main()
{
    system("cls"); // konsolu temizle
    int a,b;

    printf("Iki tam sayi giriniz.\n->");
    scanf("%d %d",&a,&b);

    int ebob = 1;

    for (int i = 2; i <= min(a,b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            //i değeri ikisini de bölüyor

            if (i > ebob)
            {
                //a ve b'yi bölen daha büyük bir sayı var
                ebob = i;
            }
            else
                break;
        }
    }

    int ekok = a*b/ebob;

    printf("EBOB: %d, EKOK %d",ebob,ekok);
    
}

