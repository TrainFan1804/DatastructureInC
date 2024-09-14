# Pointer

A pointer is something that point to another memory address. You declare it like this:

```c
int *ptr = &var;
```

This will create a pointer to the address of **var**. Here are all ways to interact
with a pointer 

```c
&ptr; // get the address of the pointer itself
*ptr; // get the value of the pointed address
ptr;  // get the value of the pointer / pointed address
```

# Arrays

Array is a collection of data. In C you declare an array like this:

```c
int arr[size];
```

**Important**: You just allocate memory address of the entered size. You DON'T
set values into those addresses!

You can also declare an array like this:

```c
int arr[] = {1, 2, 3};
```

This array has the size **3** and contains all elements between the brackets.

A C-Array is just a pointer to the first index of the declared array. That's the
reason you can also use pointer arithmetic to get a specific element of the array.
You do this like this:

```c
*(arr + index);
```

# Null Pointer

You can set a pointer that is pointing to nothing / NULL

```c
int *ptr = NULL;
```

Best Practice: If you don't set a value for the pointer directly you should declare 
the pointer with NULL!

Second Best Practice: Always check for a NULL pointer like this:

```c
if (ptr != NULL)
{
    // do you stuff
}
else
{
    // do exception stuff
}
```

# Const

The keyword `const` can be used in two ways with pointer. You can either create
pointer that can't change the value he is pointing to:

```c
const int *ptr = &var; // can point to another value but can't change the value of var
```

or you can create a pointer that can't change the address he is pointing to:

```c
int const *ptr = &var; // always point to var but var can change
```

# Functions

You can also create a pointer to a function. You do it like this:

```c
void foo(int bar) { /*...*/ }

int main()
{
    void (*func_ptr)(bar) = &foo;
    func_ptr(42);
}

```
