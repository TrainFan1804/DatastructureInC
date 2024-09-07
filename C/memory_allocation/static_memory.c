#include <stdio.h>

int main()
{
    printf("Static memory allocation (SMA) is the type of memory allocation you already"
            " used without even noticed it. Because SMA reserve memory before the program"
            " runs.\nC will automatically allocate memory for variables when the program"
            " is compiled.\n");
    int value = 5;
    printf("The declared variable use %lu memory spaces(?)\n", sizeof(value));
}
