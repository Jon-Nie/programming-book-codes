#include <stdio.h>

void main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper) 
    {
        fahr = (9.0/5.0*celsius) +32.0;
        printf("%7.0f %10.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}