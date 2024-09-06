#include <stdio.h>

void print(int a);

int main()
{
   void (*func_ptr)(int) = &print;
   func_ptr(42);
   func_ptr(69);
}

void print(int a)
{
    printf("You print the value %d\n", a);
}

