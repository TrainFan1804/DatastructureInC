#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> arrOne;
    
    std::cout << "Original\n";
    for (auto &num : arrOne)
    {
        num = 2;
        std::cout << num << "\n";
    }

    std::array copy{arrOne};
    copy.at(5) = 42;
    std::cout << "\nCopy\n";
    for (int i = 0; i < copy.size(); i++)
    {
        std::cout << copy.at(i) << "\n";
    }

    std::cout << "arrOne[5] = " << arrOne.at(5) 
        << ". It's still the origin value. You can change the copy without"
        << " changing the original\n";

    return 0;
}
