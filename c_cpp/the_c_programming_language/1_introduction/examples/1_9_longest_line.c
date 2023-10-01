#include <stdio.h>

#define MAXLINE 5

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s| %d", longest, max);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        printf("%d, %c\n", i, c);
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        printf("newline\n");
        ++i;
    }
    printf("i is %d\n", i);
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}