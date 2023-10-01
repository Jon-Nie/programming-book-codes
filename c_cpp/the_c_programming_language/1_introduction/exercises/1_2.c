#include <stdio.h>

int main() 
{
    printf("hello\aworld\n");
    printf("hello\bworld\n");
    printf("hello\fworld\n");
    printf("hello\nworld\n");
    printf("hello\rworld\n");
    printf("hello\tworld\n");
    printf("hello\vworld\n");
    printf("hello\\world\n");
    printf("hello\?world\n");
    printf("hello\'world\n");
    printf("hello\"world\n");
    printf("hello\43world\n");
    printf("hello\x23world\n");
}