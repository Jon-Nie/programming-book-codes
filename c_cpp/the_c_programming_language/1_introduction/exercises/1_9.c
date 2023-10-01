#include <stdio.h>

int main()
{
    int c, last;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || last != ' ') {
            putchar(c);
        }
        last = c;
    }
}