#include<stdio.h>

int main()
{
    printf("You can create a pointer that point to a pointer\n\n");

    int value = 42;
    printf("Original address: %p\n", &value);
    printf("Original value: %d\n\n", value);

    // ptr point to the address of value
    int *ptr = &value;
    printf("The address of the first pointer: %p\n", &ptr);
    printf("The address the first pointer is pointing: %p\n\n", ptr);

    // ptr2 point to the address of ptr
    int **ptr2 = &ptr;
    printf("The address the second pointer is pointing %p\n", ptr2);
}

