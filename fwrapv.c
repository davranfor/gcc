/*

Testing signed overflow
-----------------------

Compiling without -fwrapv:
> gcc -O2 -o demo fwrapv.c
> ./demo
2147483647 + 1 > 2147483647 = true

Compiling with -fwrapv:
> gcc -O2 -fwrapv -o demo fwrapv.c
> ./demo
2147483647 + 1 > 2147483647 = false

*/

#include <stdio.h>
#include <limits.h>

int func(int x)
{
    // Can be optimized to always return "true" when optimization is enabled
    return x + 1 > x;
}

int main(void)
{
    int x = INT_MAX;

    printf("%d + 1 > %d = %s\n", INT_MAX, INT_MAX, func(INT_MAX) ? "true" : "false");
    return 0;
}

