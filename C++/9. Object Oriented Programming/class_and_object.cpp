#include <iostream>
#include <string>

class Human
{
public:
    int age;
    std::string name;
};

int main()
{
    Human firstHuman;
    firstHuman.age = 42;
    firstHuman.name = "John";

    std::cout << firstHuman.age << "\n";
    std::cout << firstHuman.name << "\n";
}

