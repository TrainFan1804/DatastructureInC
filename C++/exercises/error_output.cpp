#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Output with cout. Is buffered.\n"; // you can also delegate this 
                                                // to a file with '>'
    cerr << "Output with cerr. Isn't buffered\n";

    return EXIT_SUCCESS;
}
