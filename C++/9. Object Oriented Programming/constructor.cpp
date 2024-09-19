#include <iostream>
#include <string>

class Human
{
private:
    int _age;
    std::string _name;

public:
    Human()
        : Human{ 0, "Default" }
    {
    }

    Human(int age)
        : Human{ age, "Default" }
    {
        /* 
         *  only need to write something in this block if you want to do
         * something when you create an object
         */
    }
    
    // you can delegate a constructor call to another constructor
    Human(std::string name)
        : Human{ 20, name }
    {
    }

    // you can overload different constructor
    Human(int age, std::string name);

    void display()
    {
        std::cout << "Age: " << _age << "\n";
        std::cout << "Name: " << _name << "\n";
    }
};

int main()
{
    Human firstHuman{ 20 };
    firstHuman.display();

    Human secondHuman{ 20, "John" };
    secondHuman.display();

    Human thirdHuman{ "Mary" };
    thirdHuman.display();

    Human defaultHuman{};
    defaultHuman.display();

    return 0;
}

// like methods you can define constuctor outside of the belonging class
Human::Human(int age, std::string name)
    :  _age{ age }, _name{ name } 
{
}
