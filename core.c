#include <stdio.h>

// this is a core function that can print a array of pointer
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

