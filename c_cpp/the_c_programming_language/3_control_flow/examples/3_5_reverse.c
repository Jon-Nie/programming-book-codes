#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i], s[i] = s[j], s[j] = c;
    }
}

int main()
{
    char word[] = "Programming";

    printf("The original word is \"%s\".\n", word);
    reverse(word);
    printf("The word in reverse order is \"%s\".\n", word);    
}