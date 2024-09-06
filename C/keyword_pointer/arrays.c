#include <stdio.h>

int main()
{
    printf("A array is just a pointer to the first element of the declared array."
            " That mean you can access an element with these two methods:\n\n");
    
    /*
     * Important: When you declare an array like this all elements but the first
     * element might be NOT 0! (Those values are the old values that were writen
     * into this address before declaring the array).
     */
    int arr[5];
    printf("Access the first element with normal array arithmetic: %d\n", arr[0]);
    printf("Access first element with pointer arithmetic: %d\n\n", *(arr + 0));

    /*
     * If you declare your array like this these values will be set to the right
     * index. See comment above.
     */
    printf("You can also set a pointer that will point to the array\n");
    int arrTwo[] = {4, 2, 6, 9};
    int *arrPtr = arrTwo;

    printf("With the help of pointer arithmetic you can iterate through the array\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Value of index %d: %d\n", i, *arrPtr++);
    }

    // ----- //
    
    printf("\nYou can also create a array of pointer\n");

    int value = 42;
    int *parr[5];

    for (int i = 0; i < 5; i++)
    {
        *(parr + i) = &value; // all pointer in the array point to the same address
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Value address at parr[%d]: %d\n", i, **(parr + i));
    }
}

