#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

int main()
{
    int len, i;
    int adjusted_len;
    char line[MAXLINE];
    
    while ((len = getline(line, MAXLINE)) > 0)
    {
        for (i=len-2; (line[i] == ' ' || line[i] == '\t'); --i)
            ;
        {
            printf("Length of Line: %d\n", i);
            printf("%s", line);
        }       
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}