#include <stdio.h>

int main()
{
    int a = 4, b=5, c;

    //20, 30, 2, 30

    c = a++ * b;
    printf("%d\n",c);
    
    c = ++a * b;
    printf("%d\n",c);
    
    c = ++a - b;
    printf("%d\n",c);
    
    c = --a * b--;
    printf("%d\n",c);
}