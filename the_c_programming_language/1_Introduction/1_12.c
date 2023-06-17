#include <stdio.h>

#define IN  1
#define OUT 0

void main()
{
    int c;
    
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t')
            c = '\n';
        printf("%c", c);
    }
}