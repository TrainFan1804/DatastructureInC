# Datatypes

This topic is really big and I can't explain everything here so I will just
cover the most important things.

# Definition and Declaration

You can *define* and *declare* a variable (You can also do this in one step).

```cpp
int var;    // define a variable. will just allocate memory.
var = 42;   // declare a variable. set the value into the allocated memory.

int var = 42;   // define and declare a variable in one line.   
```

This can be used to split the definition and declaration into seperate files.\
There are several more ways to create a variable but I will not explain them.

**IMPORTANT**: When define a variable you should also declare this variable with
an default value because the compiler will **not** do this. This can lead to
unexpected behavior.

# Types

I will just list all datatypes from least memory use to most memory use:

1. char
2. short / short int
3. int
4. long / long int
5. long long / long long int

**IMPORTANT**: The same type can have different sizes on different systems! 

## Signed / Unsigned

Datatypes can be declard `signed` or `unsigned`. The default is `signed` 
(not char!). A `unsigned` variable can't hold negative numbers but therefore
bigger positiove numbers than `signed`.

## Floating Point Numbers

The list of all float datatypes:

1. float
2. double
3. long double

**IMPORTANT**: Float numbers can't be `signed`. There are `unsigned` by
default.

# Misc

## Auto type

With the `auto` type you don't need to define the variable with an specific type.
The compiler will automaticlly find the perfect type.\

**IMPORTANT**: In C++ versions below C++11 `auto` meant something different!

## Constants

There are two ways to declare a constant variable.

```cpp
const int var = 4; 
constexpr int alsoVar = 20;
```

`constexpr`: **Must** have a value during compiling.\
`const`: **Can** have a value during compiling but can also be set during
runtime, e.g. through user input.

## sizeof

To get the size that is occupied by the variable you can use the `sizeof` operator.
