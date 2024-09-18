#include <iostream>

class WindowFrame
{
private:
    int x;
    int y;
public:
    WindowFrame(int _x, int _y);
    void resize(int _x, int _y)
    {
        this->x = _x;
        this->y = _y;
    }

    void display()
    {
        std::cout << "x: " << this->x << " y: " << this->y << "\n";
    }
};

WindowFrame::WindowFrame(int _x, int _y)
{
    this->x = _x;
    this->y = _y;
}

int main()
{
    WindowFrame frame(42, 69);
    frame.display();
    frame.resize(100, 100);
    frame.display();
}

