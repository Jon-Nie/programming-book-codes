#include <stdio.h>
#include <string.h>

int trim(char s[])
{
    int n;

    for (n = strlen(s)-1; n >= 0; n--) {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
            break;
        }
    }
    s[n+1] = '\0';
    return n;
}

int main()
{
    char word[] = " \t   Programming  \t \t  ";
    printf("The untrimmed word is \"%s\".\n", word);
    trim(word);
    printf("The right-trimmed word is \"%s\".\n", word);    
}