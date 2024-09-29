# Dynamic Memory

You can allocate memory in the *heap* by hand. Memory that is allocated in the
heap is allocated till you free the memory in the heap by hand as well!\
You can either controll memory with `new` and `delete` or you can use
*smartpointer* that will make sure the allocated memory is cleared after his
usage. You should rather use smartpointer instead of new / delete but I will
show you both.

# C-Style

You can use dynamic memory like you do it in C with *malloc* etc. I will not
exlpain this further.

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

# Smart Pointer

You should use the inbuild smartpointer that will deal with memory freed by
it's own.

```cpp
#include <memory>

std::unique_ptr<int> smPtr(new int{});  // returns a pointer to an int value (saved
                                    // in smPtr)
std::unique_ptr<int> ptr = std::make_unique<int>(123);  // rather use this because
                                                    // you don't need to use
                                                    // new
```

You can work with those pointer the same was as with raw pointer!\
**IMPORTANT**: When storing complex objects in a smart pointer you can also
use the '->' operator!\
**IMPORTANT**: There a multiple types of smart pointer you can use depending on
the *ownership* that is provided.\
You can initilize smart pointer on  arrays in the same way.
