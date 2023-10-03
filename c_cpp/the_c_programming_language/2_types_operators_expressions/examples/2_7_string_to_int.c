#include <stdio.h>

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int main()
{
    char number_as_string[] = "1234567890";
    int number = atoi(number_as_string);

    printf("number as string: %s\n", number_as_string);
    printf("number converted as int: %d\n", number); 
}