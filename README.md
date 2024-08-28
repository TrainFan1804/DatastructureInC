This repo contains some datastructure I wrote in C.
I just wanted to lean pointer so they are not really useable.

# Pointer 

``` c
int value = 42;    // set the variable "value" to 42.
int* pointer;    // create a pointer that point to no specific address.
pointer = &value;    // create a pointer that point to the address of the variable "value".
```

``` c
int arr[5];    // create a array with the lenght of 5. Each value is written after another in memory.
// CAUTION: The values aren't set to a specifc value so at the addresses are old memory values saved!
```

# Arrays

Arrays can be declared like this:

``` c
int arr[SIZE];    // create an array with the entered SIZE.
```

A array is just a pointer that is pointing to the first element of the array (index 0).
Becaus of that you can write:

``` c
int arr[10];
arr[3];    // get the value of the 3 index.
```

or

``` c
int arr[10];
*(arr + 3);    // get also the value of the 3 index.
```

Both lines are the same.
