#include <stdio.h>

int main()
{
    int value = 42;
    printf("Value of the defined variable: %d\n", value);
    printf("Address of the defined variable: %p\n\n", &value);

    int *ptr = &value;
    printf("Address from the declared pointer: %p\n", &ptr);
    printf("Value of the address the declared pointer points: %d\n", *ptr);
    printf("Address of the value the declared pointer is pointing: %p\n", ptr);
    printf("You see, the address / value the pointer is pointing is the same as"
            " above\n");
}

