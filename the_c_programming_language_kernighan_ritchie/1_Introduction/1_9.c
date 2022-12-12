#include <stdio.h>

void main()
{
    int c, before;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || before != ' ')
            putchar(c);
        before = c;
    }
}