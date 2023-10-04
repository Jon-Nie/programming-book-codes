#include <stdio.h>

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 4, 9, 11, 27, 44, 110, 140, 305, 444, 500};
    int size = sizeof(array) / sizeof(array[0]);
    int no1 = 140;
    int no2 = 77;
    int pos;

    if ((pos = binsearch(no1, array, size))!=-1) {
        printf("The number %d is at position %d in the array.\n", no1, pos);
    } else {
        printf("The number %d is not in the array.\n", no1);
    }

    if ((pos = binsearch(no2, array, size))!=-1) {
        printf("The number %d is at position %d in the array.\n", no2, pos);
    } else {
        printf("The number %d is not in the array.\n", no2);
    }
}