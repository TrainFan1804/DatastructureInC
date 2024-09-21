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

# Constructor

If you want to create a object that should contain specific values right after
the creation you don't need to set these values by hand each time you creating
a object. You can use a *constructor*.\
Here is a simple example how you define a constructor:

```cpp
class Foo
{
private:
    int _var;
    
public:
    Foo(int var)
        : _var{ var }
    {
    }
};
```

## Delegate Constructor

You can delegate one constructor call to another constructor.

```cpp
class Foo
{
public:
    Foo(int var)
        : Foo{ var, "Bar" }
    {
    }

    Foo(int var, std::string str);
};
```

**IMPORTANT**: You can **only** write a delegation constructor in the member
initializer list! If you do this in the command block you will create a new
object!

## Default Constructor

When you want to create a object with default values you can either set the
attribute values in the class itself or you can use a *default* constructor.\
**IMPORTANT**: The class contains no default constructor when you add atleast
one custom constructor that contains atleast one argument!

## Copy Constructor

A copy constructor is a constructor that take a reference to an object of the
class and create a copy of this object.

```cpp
class Bar
{
private:
    int _foo;

public:
    Bar(const Bar &rhs)     // rhs stands for 'right hand side' (original is on
                            // the right side of the copy object?! 
        : _foo{ rhs._foo }
    {
    }
};
```

When copying an object the original isn't changed in any way.\
**IMPORTANT**: You only need to define a copy constructor when your object
contains special member like raw pointer!

## Move Constructor

A move constructor is used to move values from one object to another.

```cpp
class Foo
{
private:
    int _bar;

pu gesprochen haben. Egal in welchem Alter. Sehr anständiblic:
    Foo(const Foo &rhs) = delete;   // disable the copy constructor

    /*
     * && make sure the object is deleting after this operation
     */
    Foo(Foo &&rhs)
        : _bar{ rhs._bar }
    {
        rhs._bar = 0;
    }
};
```

When moving object values to another object the original is **cleared**.\
**Important**: You should only implement a moving constructor when your object
contains raw pointer! When doing this you should also overload the *move
assignment* operator (later chapter). The compiler will create a moving 
constructor that will handle exceptions.

# Destructor

The destructor controll the destruction of an object. The destructor is called
automaticly when the object has reached his life scope!\
You only need to define your own destructor when the object is working with
dynamic memory that isn't handles automaticly (*RAII*). Normally thats is just
the case when working with raw pointer.

```cpp
class Des
{
public:
    ~Des(); // define a destructor
};
```

**IMPORTANT**: When you allocate memory in a constructor and an exception is
thrown the memory is still allocated because the destructor will **NOT** be
called!
