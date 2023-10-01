#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c;
    int counters[26];

    for (int i = 0; i < 26; ++i) {
        counters[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            counters[c-'a']++;
        }
    }
    
    // frequencies
    printf("\nCharater historgram\n");
    for (int i=0; i<26; i++) {
        printf("%c: ", 'a'+i);
        for (int j=0; j<counters[i]; j++) {
            printf("-");
        }
        printf("\n");
    }
}