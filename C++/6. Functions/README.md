# Functions

Like variables you can define and declare a function.

```cpp
void foo(); // define the function

void foo()
{
    /* function code here */
}
```

# Call-by-Value

When creating a function with parameter like this: 

```cpp
void foo(int param);
```

An you are calling this function you are calling the function *by-Value*.\
You only should use this type of function defining when the parameter are
simple (like `int`). The reason behind this is that each parameter willjj
create a seperate variable on the stack.

# Call-by-Reference

To avoid the problem with big objects that whould be copied into the stack
when passed as a function argument you should call the function *by-Reference*.\
You do it like this:

```cpp
void foo(int &param);   // to avoid unwanted changed of the original add 'const'
                        // to before the parameter type
``` 

You can call this method as usual. This will pass the reference into the
function. This will be very handy when working with big objects.

# Call-by-Pointer

You can also call a function *by-pointer*. You declare such function like this:

```cpp
void foo(int *param); // see 'const' in 'Call-by-Reference'

foo(&myInt);    // you need to call the function like this!
```

**IMPORTANT**: When using pointer in function parameter you create a copy of
the pointer address in the stack! 

# Return reference / pointer

When you want to return a reference / pointer you **can't** return a variable
that was declared in the functions scope!
