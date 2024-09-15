#include <iostream>

int main()
{
    int var;
    std::cout << "Defined a variable without a value: " << var << "\n";
    var = 42;
    std::cout << "Declared the variable with a value: " << var << "\n";

    {
        int var = 420;
        std::cout << "Definition and declaration in one line: " << var << "\n";
    }

    return 0;
}
