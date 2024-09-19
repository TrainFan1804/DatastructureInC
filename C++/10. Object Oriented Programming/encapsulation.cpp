#include <iostream>
#include <memory>

class WindowFrame
{
private:
    int _x = 50;
    int _y = 50;

public:
    // a setter that set both values directly
    void resize(int x, int y)
    {
        _x = x;
        _y = y;
    }

    int getX()
    {
        return _x;
    }

    int getY()
    {
        return _y;
    }

    void display()
    {
        std::cout << "x: " << _x << " y: " << _y << "\n";
    } 
};

int main()
{
    WindowFrame frame{};
    frame.display();
    frame.resize(100, 100);
    frame.display();

    // just an example on how to access members via pointer
    auto ptr = std::make_unique<WindowFrame>();
    ptr->display();

    return 0;
}
