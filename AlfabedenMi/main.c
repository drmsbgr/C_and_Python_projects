
#include <stdio.h>

int main()
{
    char c;

    printf("Karakter giriniz:\n->");
    scanf("%c",&c);

    if ((c > 'a' && 'z' > c) || (c > 'A' && 'Z' > c))
        printf("girdiğiniz karakter alfabedendir");
    else
        printf("kafani sikim");
    
}