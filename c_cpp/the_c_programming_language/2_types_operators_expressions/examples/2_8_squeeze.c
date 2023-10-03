#include <stdio.h>

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main()
{
    #define REMOVE 'm'

    char word[] = "mechanism";
    printf("The word is \"%s\".\n", word);
    squeeze(word, REMOVE);
    printf("The word with all '%c' characters removed is \"%s\".", REMOVE, word);   
}
