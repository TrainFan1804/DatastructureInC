#include <iostream>

#include "namespace_header.h"

namespace FOO
{
    // you can also define  namespace in a namespace
    int bar;

    void lorem()
    {
        std::cout << bar << std::endl;
    }

    void foo();
}

void FOO::foo() {

    std::cout << "The best number is 42!\n";
}


int main()
{
    FOO::bar = 69;
    FOO::lorem();
    FOO::foo();

    BAR::foo();
}
