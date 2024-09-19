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

    Human(const Human &rhs)
        : Human{ rhs._age, rhs._name }
    {
    }

    Human(Human &&rhs)
        : Human{ rhs._age, rhs._name }
    {
        rhs._age = 0;
        rhs._name = "";
    }

    void display()
    {
        std::cout << "Age: " << _age << "\n";
        std::cout << "Name: " << _name << "\n";
    }
};

int main()
{
    std::cout << "Create object with one constructor parameter\n";
    Human firstHuman{ 20 };
    firstHuman.display();

    Human thirdHuman{ "Mary" };
    thirdHuman.display();

    std::cout << "Create object with both constructor paramter\n";
    Human secondHuman{ 20, "John" };
    secondHuman.display();

    std::cout << "Create object with default constructor\n";
    Human defaultHuman{};
    defaultHuman.display();

    std::cout << "Create a copy\n";
    Human copy{ thirdHuman };
    copy.display();

    std::cout << "Move values from on object to another object\n";
    Human moved{ std::move(secondHuman) };
    moved.display();
    secondHuman.display();

    return 0;
}

// like methods you can define constuctor outside of the belonging class
Human::Human(int age, std::string name)
    :  _age{ age }, _name{ name } 
{
}
