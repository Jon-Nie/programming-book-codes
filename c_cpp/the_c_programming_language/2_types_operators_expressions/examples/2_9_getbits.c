#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

int main()
{
    #define NUMBER      346
    #define BEGINNING   6
    #define AMOUNT      4

    if (AMOUNT > BEGINNING) {
        return -1;
    }

    printf("The %d bits from position %d to position %d of the number %d represent the number %d.", AMOUNT, BEGINNING, BEGINNING-AMOUNT+1, NUMBER, getbits(NUMBER, BEGINNING, AMOUNT));
}