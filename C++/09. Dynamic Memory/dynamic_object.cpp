#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    Person(int _age)
    {
        this->age = _age;
    }
    // deconstructor will be called when enter the "delete" keyword
    ~Person()
    {
        cout << "Deconstruct person" << endl;
    }
};

int main()
{
    Person *person = new Person(20);
    cout << person->age << endl;

    delete person;
    person = nullptr;
}
