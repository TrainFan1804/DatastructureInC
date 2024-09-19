#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int(42);

    cout << "The pointer points to address " << ptr 
            << " and at this address is the value " << *ptr << " saved." << endl;

    delete ptr;     // deallocate the memory that is pointed at from the pointer
    ptr = nullptr;  // you should always set the dangling pointer to null because
                    // the pointer still points to the old memory address

    cout << "After the memory deallocation the address the pointer point to is "
            << ptr << endl; 
}

