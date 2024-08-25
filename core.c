#include <stdio.h>

void printPointerArray(int** arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (*arr[i] < 0)
        {
            continue;
        }
        printf("%d\n", *arr[i]);
    }
}

