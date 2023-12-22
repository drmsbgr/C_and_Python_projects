#include <stdio.h>

int main()
{
    char c;
    int i = 0;
    do
    {
        c = getchar();
        i++;
        putchar(c);
        if (i == 8)
        {
            putchar(' ');
            i = 0;
        }

    } while (c != EOF);

    return 0;
}