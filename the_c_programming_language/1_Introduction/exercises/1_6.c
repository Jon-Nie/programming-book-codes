#include <stdio.h>

void main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        printf("getchar() != EOF equals %d\n", c != EOF);
    }
    printf("getchar() != EOF equals %d\n", c != EOF);
}