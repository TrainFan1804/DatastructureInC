#include <iostream>
#include <string>

struct Person
{
    int age;
    std::string name = "Default name";

    void display();
};

void foo(const Person *person)
{
    std::cout << "This element was access via -> operator\n";
    std::cout << person->name << "\n";
}

int main()
{
    Person person { 42 };
    person.display();

    person.name = "John";
    person.display();

    foo(&person);

    return 0;
}


void Person::display()
{
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}
