0x18. C - Dynamic libraries
Resourcesbooks

Read or watch:

    What is difference between Dynamic and Static library (Static and Dynamic linking)
    create dynamic libraries on Linux
    Technical Writing

Learning Objectivesbulb

What you should learn from this project:

    What is a dynamic library, how does it work, how to create one, and how to use it
    What is the environment variable $LD_LIBRARY_PATH and how to use it
    What are the differences between static and shared libraries
    Basic usage nm, ldd, ldconfig

Create a Dynamic libray

You must make Position Independent object Code, and dynamic libraries end with .so:

gcc -fPIC *.c -shared -o libholberton.so

There are a couple relevant flags to note:

    -fPIC: Creates Position Independent Code, which is required when generating dynamic libraries because they are implemented at runtime, the library could be loaded anywhere in memory.
    -shared: Creates a shared (dynamic) library, which is similar to a normal executable with a few exceptions. The significant difference is executables have one entry point. Where as dynamic libraries have no defined entry point, they can have multiple entry points.

0. A library is not a luxury but one of the necessities of life

    Create the dynamic library libholberton.so containing all the functions listed below:

1. Without libraries what have we? We have no past and no future

    Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

2. Either write something worth reading or do something worth writing

    Write a blog post describing the differences between static and dynamic libraries. It should cover:

3. Let's call C functions from Python

    I know, you’re missing C when coding in Python. So let’s fix that!

Author

    Ogundiran Olanike - NikkyXO

