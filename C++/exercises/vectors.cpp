/*
 * You can use vector if you want to store data dynamicly without knowing 
 * the size of all data you want to save.
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vevOne (5);

    for (int i = 0; i < vevOne.size(); i++)
    {
        vevOne.at(i) = i;
    }

    for (int num : vevOne)
    {
        cout << num << endl;
    }

    vector<int> vevTwo (10, 42);

    for (int num : vevTwo)
    {
        cout << num << endl;
    }
}
