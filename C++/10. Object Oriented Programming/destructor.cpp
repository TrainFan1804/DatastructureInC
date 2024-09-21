/*
 * This example is not really good because you integer values will be destroy
 * by the compiler itself.
 */
#include <iostream>

class Foo
{
private:
    int _id;

public:
    Foo(int id)
        : _id{ id }
    {
    }

    ~Foo()
    {
        std::cout << "Object with id " << _id << " destroyed!\n";
    }
};

int main()
{
    Foo fooOne{ 1 };
    {
        Foo fooTwo{ 2 };
    }

    return 0;
}
