# Compiling

## Compile Process

To write a programm in C++ you should know how the compile process works.

1. Write a source code file (end with *.cpp*)
2. Compile the source code to and *.obj* / *.o* file
3. Link the object files to create an executable file

Step 2 and Step 3 can be combinded.\
The following command will create an executable file "main" from the main.cpp
source code file.

```
g++ --output main main.cpp 
```

To create an object file you can use the following command:

```
g++ --compile main.cpp
```

There are multiple flags you can use to modify the compile process. I will not 
list any of them here.

# Exit Code

You will write exit codes in C++ that will contain information about how the 
programm end. You can check the exit code of the **last** running programm
with (on Linux):

```
echo $?
```
