#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float fahr_to_celsius(float fahr);

void main()
{
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, fahr_to_celsius(fahr));
    return 0;
}

float fahr_to_celsius(float fahr)
{
    return (5.0/9.0) * (fahr-32);
}