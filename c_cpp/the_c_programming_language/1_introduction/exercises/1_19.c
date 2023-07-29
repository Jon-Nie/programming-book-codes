#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char line[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
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

void reverse(char line[])
{
    int i;
    int length;

    for(i=0; line[i]!='\n'; ++i)
        ;
    length = i;

    char temp[length+2];

    for(i=0; i<length+2; ++i)
        temp[i] = line[i];
    
    for (i=0; i<length; ++i)
        line[length-i-1] = temp[i];
    
    line[length] = '\n';
    line[length+1] = '\0';
}