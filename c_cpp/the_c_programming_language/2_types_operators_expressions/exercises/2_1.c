#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("A char holds values between %d and %d.\n", CHAR_MIN, CHAR_MAX);
    printf("An unsigned char holds values between %u and %u.\n", 0, UCHAR_MAX);
    printf("A signed char holds values between %d and %d.\n\n", SCHAR_MIN, SCHAR_MAX);

    printf("A short holds values between %d and %d.\n", SHRT_MIN, SHRT_MAX);
    printf("An unsigned short holds values between %u and %u.\n", 0, USHRT_MAX);
    printf("A signed short holds values between %d and %d.\n\n", SHRT_MIN, SHRT_MAX);

    printf("An int holds values between %d and %d.\n", INT_MIN, INT_MAX);
    printf("An unsigned int holds values between %u and %u.\n", 0, UINT_MAX);
    printf("A signed int holds values between %d and %d.\n\n", INT_MIN, INT_MAX);

    printf("A long holds values between %ld and %ld.\n", LONG_MIN, LONG_MAX);
    printf("An unsigned long holds values between %lu and %lu.\n", 0, ULONG_MAX);
    printf("A signed long holds values between %d and %d.\n\n", LONG_MIN, LONG_MAX);

    printf("A long long holds values between %lld and %lld.\n", LLONG_MIN, LLONG_MAX);
    printf("An unsigned long long holds values between %llu and %llu.\n", 0, ULLONG_MAX);
    printf("A signed long long holds values between %lld and %lld.\n\n", LLONG_MIN, LLONG_MAX);

    printf("A float holds values between %le and %le.\n", FLT_MIN, FLT_MAX);
    printf("A double holds values between %le and %le.\n", DBL_MIN, DBL_MAX);
}