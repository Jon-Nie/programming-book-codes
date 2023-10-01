#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, counter;
    int state = OUT;
    int max_length = 0;
    int counters[200];

    for (int i = 0; i < 200; ++i)
        counters[i] = 0;

    while ((c = getchar()) != EOF) 
    {
        if (state == IN) {
            ++counter;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                ++counters[counter];
            }
            if (counter > max_length) {
                max_length = counter;
            }
            state = OUT;
            counter = 0;
        } else {
            state = IN;
        }
    }

    // horizontal histogram
    for (int i=1; i<=max_length; ++i) {
        if (i < 10) {
            printf("   ");
        } else if (i < 100) {
            printf("  ");
        } else {
            printf(" ");
        }
        printf("%d: ", i);
        for (int j=0; j<counters[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }

    printf("\n");

    // vertical histogram
    int max_occurence = 0;
    for (int i=1; i<200; ++i) {
        if (counters[i] > max_occurence) {
            max_occurence = counters[i];
        }
    }

    for (int i=max_occurence; i>0; i--) {
        for (int j=1; j<=max_length; ++j) {
            if (j >= 100) {
                printf("   ");
            } else if (j >= 10) {
                printf("  ");
            } else {
                printf(" ");
            }

            if (counters[j] >= i) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n ");
    for (int i=1; i<=max_length; ++i) {
        printf("%d ", i);
    }
}