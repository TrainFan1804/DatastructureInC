# Strings

There are two ways to work with strings in C++. You can work with the *string*
module from the standard libary or you can use *C-Strings* .\

## std::string

When including *string* from the standard libary you can use the string container
to work with strings. The module also provide some usefull methods on the string 
to perform specific task easily.

```cpp
std::string str = "Hello World!"; 
```

## C-String

You can declare a C-String like this:

```cpp
char word[] = "Hello World!";
```

Those strings are based on arrays and when you working with them you can counter
alot of trouble that can be avoided when you working with the *string* module
from the standard libary instead.

# Arrays

Like strings there are multiple ways to work with arrays in C++. You can use the
*array* or *vector* module from the standard libary or you can use *C-Arrays* instead.
The standard libary also contains some usefull methods you can call on *array* and
*vector* to perform some usefull actions.

## Array

When you already know how much data you want to store you can use the *array* module.
Arrays from this module can't be changed in size. You can declare one like this:

```cpp
std::array<TYPE, SIZE> arr; // replace TYPE with the type you want to save and SIZE
                            // with the size of the array
```

## Vector

The *vector* module provide a container that work like the *array* module but unlike
those array it can change his size dynamicly.

```cpp
std::vector<TYPE> arr;  // replace TYPE with the type you want to store
```

## C-Array

You can also declare a *C-Array* like this:

```cpp
int arr[10]; // declare an array with the size of 10 
```

**IMPORTANT**: If you don't be careful you can access values that doesn't belong 
to the array! 

# Important

Just use *C-Strings* and *C-Arrays* when you need to!
