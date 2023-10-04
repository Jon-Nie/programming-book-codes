#include <stdio.h>


void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {66, 21, 325, 1, 81, 44, 555, 1902, 44, 43, 65};
    int size = sizeof(array) / sizeof(array[0]);

    printf("The unsorted array is {");
    for (int i = 0; i < size; i++) {
        printf("%d%s", array[i], i==(size-1) ? "" : ", ");
    }
    printf("}.\n");

    shellsort(array, size);

    printf("The sorted array is {");
    for (int i = 0; i < size; i++) {
        printf("%d%s", array[i], i==(size-1) ? "" : ", ");
    }
    printf("}.\n");
}