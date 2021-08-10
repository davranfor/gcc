/* Cross compiling C and C++
------------------------------------
gcc -c -std=c11 -o main.o main.c
g++ -c -std=c++0x -o func.o func.cpp
g++ -o demo main.o func.o
*/

#include <stdio.h>
#include "func.h"

int main(void)
{
    printf("%d\n", func(3)); // func is a C++ function
    return 0;
}
