#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int *number;    // this is stupid but I want to learn so yeah I don't care
    string name;
    string mail;
public:
    Person(int *_number, string _name, string _mail)
    {
        this->number = _number;
        this->name = _name;
        this->mail = _mail;
    }

    void display()
    {
        cout << this->name << ", " << this->mail << ", ";
        for (int i = 0; i < sizeof(this->number); i++)
        {
            cout << *(number + i);
        }

        cout << endl;
    }
};

void printAddressBook()
{
    // print file content
    int phone[] = {4, 9, 0, 1, 2, 3, 4, 5};
    Person person(phone, "John", "john@mail.com");
    person.display();
    cout << endl;
}

void addContact()
{
    cout << "Do something crazy...\n\n";
}

int main()
{
    cout << "Hello to your address book\n";

    string input;
    while (true)
    {
        cout << "What do you want to do?\n1. Show contact\n2. Add contact\n3. Exit\n";
        cin >> input;
        if (input == "1")
        {
            printAddressBook();
        } 
        else if (input == "2")
        {
            addContact();
        }
        else if (input == "3")
        {
            cout << "Goodbye!\n";
            return 0;
        }
        else
        {
            cout << "Wrong input! Try again\n";
        }
    }
}

