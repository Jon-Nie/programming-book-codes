#include <stdio.h>

#define IN  1
#define OUT 0

void main()
{
    int c, counter;
    int state = OUT;
    int max_length = 0;
    int counters[200];
    char *spaces;

    for (int i = 0; i < 200; ++i)
        counters[i] = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
                counters[counter]++;
            if (counter > max_length)
                max_length = counter;
            state = OUT;
            counter = 0;
        }
        else
            state = IN;
        if (state == IN)
            counter++;
    }

    // horizontal histogram
    for (int i=1; i<=max_length; i++)
    {
        if (i < 10)
            spaces = "   ";
        else if (i < 100)
            spaces = "  ";
        else
            spaces = " ";
        printf("%s%d: ", spaces, i);
        for (int j=0; j<counters[i]; j++)
            printf("-");
        printf("\n");
    }
    printf("\n");

    // vertical histogram
    int max_occurence = 0;

    for (int i=1; i<200; i++)
        if (counters[i] > max_occurence)
            max_occurence = counters[i];

    for (int i=max_occurence; i>0; i--)
    {
        for (int j=1; j<=max_length; j++)
        {
            if (j >= 100)
                spaces = "   ";
            else if (j >= 10)
                spaces = "  ";
            else
                spaces = " ";
            if (counters[j] >= i)
                printf("%s|", spaces);
            else
                printf("%s ", spaces);
        }
        printf("\n");
    }
    printf("\n ");
    for (int i=1; i<=max_length; i++)
        printf("%d ", i);
}