#include <iostream>

int main()
{
    int org = 42;
    int *ptr = nullptr;
    ptr = &org;

    std::cout << "Value of org: " << org << "\n";
    std::cout << "Address of org: " << &org << "\n";
    std::cout << "Value of ptr: " << ptr << "\n";
    std::cout << "Address of ptr: " << &ptr << "\n";

    std::cout << "I will dereference the pointer and change the value of org\n";

    *ptr = 30;
    std::cout << "Value of org: " << org << "\n";
    std::cout << "Derefenced ptr: " << *ptr << "\n";
 
    return 0;
}
