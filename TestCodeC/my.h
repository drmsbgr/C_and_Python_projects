#pragma
#include <stdio.h>
#include <ctype.h>

enum States {NORMAL, INWORD};

enum States handleNormalState(int c)
{
    enum States nextState = NORMAL;
    if (isalpha(c))
    {
        c = toupper(c);
        putchar(c);
        nextState = INWORD;
    }

    return nextState;
}

enum States handleInwordState(int c)
{
    enum States nextState = INWORD;

    if (isspace(c))
    {
        if (getchar() != EOF)        
            putchar(' ');

        nextState = NORMAL;                
    }
    else
    {
        if (!isalpha(c))
            nextState = NORMAL;
        putchar(c);
    }

    return nextState;
}