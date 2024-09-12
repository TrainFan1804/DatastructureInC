#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Output with cout. Is buffered.\n"; // you can also delegate this 
                                                // to a file with '>'
    cerr << "Output with cerr. Isn't buffered\n";

    int input;

    cin >> input;
    if (cin.fail())
    {
        cerr << "Error because of wrong input\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
