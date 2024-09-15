#include <iostream>

int main()
{
    auto var = 42;
    
    int in;
    std::cin >> in;
    const int cVar = in;
    std::cout << "const var is: " << cVar << "\n";
    
    constexpr int eVar = 22;
    std::cout << "This variable was set during compile time: " << eVar << "\n";

    return 0;
}
