#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define B 30

int main()
{
    srand(time(NULL));
    int liste[B];
    for (int i = 0; i < B; i++)
    {
        int s = rand() % 31 + 20;
        liste[i] = s;
        printf("%d.sayinin (%d) kubu\t: %d\n", i + 1, s, s * s * s);
    }

    return 0;
}