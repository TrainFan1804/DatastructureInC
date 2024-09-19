#include <iostream>

using namespace std;

int main()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i;
        cout << *(arr + i) << endl;
    }

    cout << endl;
    delete[] arr;   // same as a pointer deletion but with [] 
                    // (because otherwise just the first memory
                    // will be deallocated)
    arr = nullptr;
}
