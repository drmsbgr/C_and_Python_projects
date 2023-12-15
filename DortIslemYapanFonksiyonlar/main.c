#include <stdio.h>

int topla(int a, int b)
{
    return a + b;
}

int carp(int a, int b)
{
    return a * b;
}

int main()
{
    int s1, s2;

    printf("iki sayi girin\n->");
    scanf("%d %d", &s1, &s2);

    printf("Toplamlari:%d\n", topla(s1, s2));
    printf("Carpimlari:%d", carp(s1, s2));
    return 0;
}