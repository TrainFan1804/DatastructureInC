#include <stdio.h>

const int SIZE = 10;

// set the values of the data array to 0 to be sure they are not random
// numbers
void setArrayValues(int* arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        *(arr + i) = i;    // the same as: arr[i] = i;
    }
}

// this is a core function that can print a array of pointer
void printPointerArray(int** arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (*arr[i] < 0)
        {
            continue;
        }
        printf("%d\n", *(*arr + i));    // the same as: *arr[i]);
    }
}

