#include <stdio.h>
#include <stdlib.h> // important to allocate memory

void allocate()
{
    int numOfVar = 10;
    int *ptr = malloc(numOfVar * sizeof(int));
    printf("allocated memory size with malloc: %lu\n", 
                numOfVar * sizeof(*ptr));

    numOfVar = 5;
    int *ptr2 = calloc(numOfVar, sizeof(int)); // also writes 0 in the
                                               // allocated memory
    printf("allocated memory size with malloc: %lu\n\n", 
                numOfVar * sizeof(*ptr2));

}

void access()
{
    int *ptr = calloc(4, sizeof(int)); // here you can see that calloc also 
                                       // write 0 in memory
    printf("Values in memory: %d, %d, %d, %d\n", 
                *ptr,  *(ptr + 1), *(ptr + 2), *(ptr + 3));
}

void reallocate()
{
    printf("When you use reallocate() you get a pointer that points to a NEW"
            " address with the allocated memory. The old allocated memory is"
            " will be cleard\n");

    int *ptr1 = malloc(sizeof(int));
    int *ptr2 = realloc(ptr1, 2 * sizeof(int)); // it's good pratice to use
                                                // overwrite the old pointer

    printf("It's good practise to null check the new pointer because it may"
            " happen that the memory can't be reallocated\n");

    printf("You can also deallocate (free) allocated memory thats no longer needed\n");
    free(ptr1);
}

int main()
{
    printf("Unlike static memory, dynamic memory is allocated during runtime of"
            " the program. Because dynamic memory doesn't belong to variables"
            " you can only access the memory via pointer.\n\n");

    // ----- allocate memory ----- //
    printf("You can allocate memory with malloc() and calloc(). Both functions"
            " return a pointer to its address.\n");
    allocate();

    // ----- access memory ----- //
    printf("You can access dynamic memory like arrays via it's index.\n");
    access();

    // ----- real- / deallocate memory ----- //
    printf("You can also reallocate the reserved memory to a bigger / smaller size\n");
    reallocate();
}

