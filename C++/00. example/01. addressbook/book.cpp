#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void printAddressBook()
{
    ifstream contactFile;
    contactFile.open("contact.txt", ios::in);   // ios::in == read only
    string content;
    if (contactFile.is_open())
    {
        while(contactFile.good())   // can also write while(contactFile)
        {
            getline(contactFile, content);
            cout << content << endl;
        }
        contactFile.close();
    }
    else
    {
        cout << "Error! Can't open file\n";
    }
}

void addContact()
{
    // this is ugly but I don't care right now
    string name;
    string mail;
    string number;
    
    cout << "What is the name of your new contact?\n";
    cin >> name;
    cout << "What is the mail of your new contact?\n";
    cin >> mail;
    cout << "What is the number of your new contact?\n";
    cin >> number;

    fstream contactFile;
    contactFile.open("contact.txt", ios::app);  // ios::app == append mode
    if (contactFile.is_open())
    {
        contactFile << name << ", " << mail << ", " << number << endl; 
        contactFile.close();
    }
    else
    {
        cout << "Error! Can't open file\n";
    }
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
            cout << "Wrong input! Try again\n\n";
        }
    }
}

