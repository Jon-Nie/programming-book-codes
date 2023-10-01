#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, last;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            c = '\n';
        }
        if (c != '\n' || last != '\n') {
            printf("%c", c);
        }
        last = c;
    }
}