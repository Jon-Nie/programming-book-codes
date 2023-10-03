#include <stdio.h>

int lower(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else{
        return c;
    }
}

int main()
{
    int i = 0;

    char all_upper[] = "JONAS";
    printf("string all upper case: %s\n", all_upper);
    printf("string all lower case: ");
    while (all_upper[i] != '\0') {
        printf("%c", lower(all_upper[i]));
        ++i;
    }
}