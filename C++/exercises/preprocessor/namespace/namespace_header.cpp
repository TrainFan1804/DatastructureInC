#include <iostream>
#include "namespace_header.h"

void BAR::foo()
{
    std::cout << "This function was defined in a seperate file!\n";
}
