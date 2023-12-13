#include <stdio.h>
#include <math.h>

float F(float x)
{
    float deger = x * x * x + sin(x) + 3 * x * x - x;

    return deger;
}

float F_turev(float x)
{
    float deger = 3 * x * x + cos(x) + 6 * x - 1;

    return deger;
}

#define h 0.000001

int main()
{
    printf("bir deger giriniz\n->");
    float girdi = 0;
    scanf("%f", &girdi);

    float yaklasikTegetEgimi = (F(girdi + h) - F(girdi)) / h;

    printf("F'(%.3f)~%.3f\n", girdi, yaklasikTegetEgimi);
    printf("F'(%.3f)=%.3f", girdi, F_turev(girdi));
}