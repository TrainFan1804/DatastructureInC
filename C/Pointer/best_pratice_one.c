/*
 * This file does NOT contain any tips for dynamic memory allocation
 */
#include <stdio.h>

void foo(int *value)
{
    printf("Address of value in foo(): %p\n", value);
}

int main()
{
    // ----- NULL pointer practice ----- //
    printf("Always declare a pointer with NULL or a valid memory address\n\n");
    
    int *ptr;
    printf("Because when you dont do this you get always a random address:\n");
    printf("%d\n", ptr);

    ptr = NULL;
    printf("When you declare the pointer with NULL you get always the same address:\n");
    printf("%d\n\n", ptr);


    printf("You should check for NULL pointer because when you try to access"
            " the value. The programm will be stop running\n");
    if (ptr != NULL)
    {
        printf("%d\n", *ptr); // this will be dump the memory core because ptr is
                              // pointing to NULL rn
    }
    else
    {
        printf("Pointer is NULL\n\n");
    }

    // ----- const pointer practice ----- //
    printf("The keyword 'const' can be used in to different ways\n");
    printf("const int *ptr = &n; // ptr can't change the value of n\n");
    printf("int const *ptr = &n; // ptr can't change the address he is pointing to\n\n");

    // ----- func argument pointer practice ----- //
    printf("If you want a function to change the value directly you can use a pointer\n");
    int value = 42;
    printf("Address of value in main(): %p\n", &value);
    foo(&value);
    printf("This pratice is useful when working big data");
}

