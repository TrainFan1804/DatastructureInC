# Information

If you don't want to share you source code you can compile a *.obj* file with

```
g++ foo.cpp -c
```

This command will create a object file that can be shared without leaking the original code.

With an object file you compile your own project the same way as with a *.cpp* file.

```
g++ main.cpp foo.o
```
