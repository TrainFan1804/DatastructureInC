#include <iostream>

class Human
{
public:
    int age;

    Human()
    {
        this->age = 0;
    }
    // you can overload different constructor
    Human(int _age);
};

// like methods you can define constuctor outside of the belonging class
Human::Human(int _age)
{
    this->age = _age;
}

int main()
{
    Human firstHuman;
    std::cout << firstHuman.age << "\n";

    Human secondHuman(20);
    std::cout << secondHuman.age << "\n";
}

