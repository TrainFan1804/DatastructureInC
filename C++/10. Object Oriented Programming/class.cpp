#include <iostream>
#include <string>

class Human
{
public:
    /*
     * You can name a field like you want but I like to write '_' before the
     * name so I can access a variable inside the class easily even
     * when a variable in a method has the same name as a field without using
     * 'this->'
     */
    int _age;
    std::string _name = "default";   // you can define default values

    void display()
    {
        std::cout << "Speak..\n";
        std::cout << _age << "\n";
        std::cout << this->_name << "\n";
    }

    void speak();
};

int main()
{
    Human firstHuman{};
    firstHuman.display();
    firstHuman._age = 42;
    firstHuman._name = "John";
    firstHuman.display();

    return 0;
}

// define method outside of a class
void Human::speak()
{
    std::cout << "Say something..\n";
}
