# Reference

A reference is an *alias* for object in memory (E.g. a variable). When creating
a reference you **don't** create a new object with the same value you create a
additional name for this object.

```cpp
int original = 42;
int &reference = original;
```

**IMPORTANT**: You can only assign a reference **once**. Further assignments will
change the original value as well!

# Pointer

A pointer is an object that store an *address* of another object. The pointer
is *pointing* to the other object.

```cpp
int original = 42;
int *ptr;
ptr = &original;    // set the value of the pointer to the address of original
```

To dereference the pointer (get the value of the object the pointer is pointing to)
you do this:

```cpp
int copy = *ptr;    // copy the value that is stored in the pointed object
```

## Null Pointer

When you define a pointer without any value you should declare this pointer
with `nullptr` to make sure you create a pointer that point to *nothing*.\
This is useful because you can check for `nullptr` with `if` to catch
unwanted behavior!
