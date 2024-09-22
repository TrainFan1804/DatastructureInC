# Dynamic Memory

You can allocate memory in the *heap* by hand. Memory that is allocated in the
heap is allocated till you free the memory in the heap by hand as well!\
You can either controll memory with `new` and `delete` or you can use
*smartpointer* that will make sure the allocated memory is cleared after his
usage. You should rather use smartpointer instead of new / delete but I will
show you both.

# New and Delete

```cpp
int *ptr{ new int{ 123 } };
/* ... */
int *ptr2;
ptr2 = new int{ 321 };
```

Both methods above are valid to work with dynamic memory. In the example two
pointer are created that point to a address in the heap that is allocated.

```cpp
int *ptr{ new int{ 123 } };
delete ptr;
ptr = nullptr;
```

`delete` will free the address in the heap. You should also always add the
third line because the pointer still holds the old address but you can't work
with this address. To avoid unexpected behavior set the pointer null!\
**IMPORTANT**: Of course you can also use dynamic memory with your own objects!

## Arrays

When using arrays you need to write:

```cpp
int *ptr{ new int[100] };
/* ... */
delete[] ptr;
ptr = nullptr;  // set null!
```

# CAUTION

You should not use any of those methods that is shown in this folder because
using raw pointer can followed by memory leaks when not using with care!
