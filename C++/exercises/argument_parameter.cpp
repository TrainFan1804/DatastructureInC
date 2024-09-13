#include <iostream>

/*
 * argv[0] is the name of the file!
 */
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }
}
