#include <iostream>

int main()
{
    std::cout << "Output with cout. Is buffered.\n";
    std::cerr << "Output with cerr. Isn't buffered\n";

    int input;

    std::cin >> input;
    /*
     * I will no use this in this repo but you should use this always to
     * check for valid input!
     */
    if (std::cin.fail())
    {
        std::cerr << "Error because of wrong input\n";
        return 1;
    }

    return 0;
}
