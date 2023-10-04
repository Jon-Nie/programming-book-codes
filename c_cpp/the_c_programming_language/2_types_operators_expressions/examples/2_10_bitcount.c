#include <stdio.h>

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1) {
        if (x & 01) {
            b++;
        }
    }
    return b;
}

int main()
{
    #define NUMBER 242

    printf("The number %d has a total of %d 1-bits.", NUMBER, bitcount(NUMBER));
}