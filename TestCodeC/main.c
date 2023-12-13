#include <stdio.h>
#include <ctype.h>
#include "my.h"

int main()
{
    int c;
    enum States state = NORMAL;

    c = getchar();

    while (c != EOF)
    {
        switch (state)
        {
            case NORMAL:
                state = handleNormalState(c);
                break;
            case INWORD:
                state = handleInwordState(c);
                break;
        }

        c = getchar();
    }

    return 0;    
}