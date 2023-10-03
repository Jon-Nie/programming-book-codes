#include <stdio.h>

void strcat_custom(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0') {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0') {
        ;
    }
}

int main()
{
    char string1[] = "Hello ";
    char string2[] = "World";
    printf("The two strings are \"%s\" and \"%s\".\n", string1, string2);
    strcat_custom(string1, string2);
    printf("The concatenated string is \"%s\".", string1);
}