# Information

We will now create our own datastructures.

# Struct

You can define a struct that can hold different datatypes. Those datatypes
will be united under the struct.\
This is one example of a struct and a struct type that are declared.

```cpp
struct Person
{
    std::string name = "Default";   // you can also initilize a default value
                                    // is used when you don't asign a own value
    int age;
};

/* ... */

Person person {};    // you should always do this because this will initilize
                    // the struct members with default values
Person person { "John", 42 };   // this will set the struct members directly
                                // to these values
```

## Access

You can access a value by doing this:

```cpp
Person person{ "John", 42 };
person.age = 30;    // you can change values directly
person.name;
```

When pass a struct into a function you should pass the struct with a
*reference*. When passing a struct through a reference you can use the above
method to access elements. \
You can also pass a struct type through a pointer (Rather use references). When
passing a struct through a pointer you can access the elements only like this:

```cpp
void foo(const Person *person)
{
    std::cout << person->age << "\n";
    std::cout << (*person).name << "\n";
}
```

## Methods

You can also define your own functions in your struct. Those functions are
calles *methods* and can only be called by an struct type!

# Enum

You can create  your own enumerations. You do it like this:

```cpp
enum class Color    // you can also write enum struct
{
    BLUE,
    RED,
    GREEN,
    YELLOW
};

/* ... */

Color color { Color::RED };
color = Color::GREEN;
```

**IMPORTANT**: You can also define a enum without *class* / *struct* keyword
but this will make the enum accessible without the member access operator. You
should use the *scoped enum* (with class / struct keyword)!
