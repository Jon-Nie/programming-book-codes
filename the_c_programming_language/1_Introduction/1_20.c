#include <stdio.h>

#define TABS_TO_WHITESPACE 4

int main()
{
    int c, j;

    while ((c=getchar()) != EOF)
    {
        if (c=='\t')
            for (j=0; j<TABS_TO_WHITESPACE; j++)
                putchar(' ');
        else
            putchar(c);
    }
    return 0;
}