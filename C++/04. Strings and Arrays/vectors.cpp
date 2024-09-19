#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vevOne (5);

    for (int i = 0; i < vevOne.size(); i++)
    {
        vevOne.at(i) = i;
    }

    for (int num : vevOne)
    {
        std::cout << num << "\n";
    }

    std::vector<int> vevTwo (10, 42);

    for (int num : vevTwo)
    {
        std::cout << num << "\n";
    }

    return 0;
}
