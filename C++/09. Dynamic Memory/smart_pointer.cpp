#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> ptr(new int{ 123 });
    std::cout << *ptr << "\n"; 

    auto ptr2 = std::make_unique<int>(321); // auto will find the right type
                                            // automaticly
    std::cout << *ptr2 << "\n";

    return 0;
}
