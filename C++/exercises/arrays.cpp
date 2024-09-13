#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arrOne;
    
    cout << "Original\n";
    for (auto &num : arrOne)
    {
        num = 2;
        cout << num << endl;
    }

    array copy{arrOne};
    copy.at(5) = 42;
    cout << "\nCopy\n";
    for (int i = 0; i < copy.size(); i++)
    {
        cout << copy.at(i) << endl;
    }

    cout << "arrOne[5] = " << arrOne.at(5) 
        << ". It's still the origin value. You can change the copy without"
        << " changing the original\n";
}
