#include <iostream>

class Car
{
public:
    // declare and define method inside of class
    void drive(int km)
    {
        std::cout << "You are driving " << km << " km\n";
    }

    // just declare method inside class and..
    void honk();
};

// define outside class
void Car::honk()
{
    std::cout << "honk!!\n";
}

int main()
{
    Car crazyCar;
    crazyCar.drive(10);
    crazyCar.honk();
}

