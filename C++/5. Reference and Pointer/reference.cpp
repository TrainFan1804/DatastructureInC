#include <iostream>

int main()
{
    int org = 42;
    int &ref = org;
    std::cout << "Value of org: " << org << "\n";
    std::cout << "Value of ref: " << ref << "\n";

    std::cout << std::boolalpha;
    std::cout << "Address is same? " << (&org == &ref) << "\n";

    std::cout << "I will change the value of one of the variables!\n";
    org = 50;
    std::cout << "Value of org: " << org << "\n";
    std::cout << "Value of ref: " << ref << "\n";

    std::cout << "Address is same? " << (&org == &ref) << "\n";
    std::cout << std::noboolalpha;

    return 0;
}
