#include <stdio.h>

#define IN  1
#define OUT 0

void main()
{
    int c, before;
    
    while ((c = getchar()) != EOF) 
    {
        if ((c == ' ' || c == '\t'))
            c = '\n';
        if (c != '\n' || before != '\n')
            printf("%c", c);
        before = c;
    }
}