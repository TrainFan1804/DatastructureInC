# Class Basics

When you want to define a struct that also contains multiple methods you should
consider creating a class instead.\
You can define a simple class like this:

```cpp
class MyClass
{
int _classVar;
};

/* ... */

MyClass myObject{};
```

## Encapsulation

The above class is not realy useful because the attribute is *private*. Private
means you can't access the variable outside of the class itself!\
**IMPORTANT**: In C++ all attributes / methods inside a class are *private* by
default as long as not defined otherwise!\
There are three different *access modifier*.

1. public - access attributes / methods from *everywhere* with an object of the type
2. private - no access to attributes / methods but inside the class itself
3. protected - access inside the class and in *inherited* classes

**RULE**: You should declare all variables *private* unless you know exactly 
what you are doing. This can help you to controll data access from the outside.

### Getter / Setter

To controll access to inner attributes you can define *getter* and *setter*.
A getter will return a inner attribute and a setter will set a attribute. But
you can't just allow access to an attribute you can also *controll* access from
the outside.\
Here is a example how you can define controlling getter and setter:

```cpp
class MyClass
{
private:
    int _myVar;

public:
    void setVar(int var)
    {
        if (var < 0) _myVar = var;
    }
    int getVar()
    {
        if (_myVar == 50)
        {
            _myVar /= 2;
            return _myVar;
        }

        return _myVar;
    }
};
```

## Member Access

To access a class member you can use the '.' operator like in struct or the
'->' operator when using a object that was initilize with a pointer.

```cpp
class MyClass
{
public:
    int _myVar;
};

/* ... */

MyClass obj{};
obj._myVar;

// see dynamic memory chapter
std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>();
ptr->_myVar;
```
