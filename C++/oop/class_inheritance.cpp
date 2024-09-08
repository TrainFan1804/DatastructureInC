// just don't use inheritance
#include <iostream>

class Vehicle
{
public:
    void honk()
    {
        std::cout << "honk\n";
    }
protected:
    int age;
};

class Car : public Vehicle
{
public:
    Car(int _age, int _km)
    {
        this->age = _age;
        this->km = _km;
    }
    void drive()
    {
        std::cout << "Drive car..\n";
    }
private:
    int km;
};

int main()
{
    Car newCar(10, 10);
    newCar.honk();
    newCar.drive();
}

