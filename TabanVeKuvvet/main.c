#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    system("cls");
    float a,b;

    printf("Tabani ve kuvveti girin.\n->");
    scanf("%f %f",&a,&b);

    float sonuc = pow(a,b);

    system("cls");
    printf("%.2f ^ %.2f = %.2f",a,b,sonuc);
}