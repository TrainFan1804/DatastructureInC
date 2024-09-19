# Setup

To print / read something into / from the terminal you need to include the 
**iostream** module. This module is part of the standard libary. You include
the module with:

```cpp
#include <iostream>
```

# Output

You can print out something with:

```cpp
std::cout << "Your content you want to print\n";
```

# Input

To read from the terminal you need to define a variable that will hold the 
input data.

```cpp
std::cin >> youVariable;
```

# Error Output

You can also print something into the terminal with `std::cerr`. 

```cpp
std::cerr << "This is an error message.\n";
```

This is useful to seperate the default output directly into a seperate file.
You can delegate the normal output with:

```
myApp > normal_output.txt
```
