/**
gcc -Wall -Wpedantic -Wl,--wrap,malloc -Wl,--wrap,calloc -Wl,--wrap,realloc -o demo main.c mem.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str1 = malloc(32);

    strcpy(str1, "Hello world");
    printf("%s\n", str1);

    char *str2 = calloc(32, 1);

    strcpy(str2, "Hello world");
    printf("%s\n", str2);

    str2 = realloc(str2, 64);

    strcpy(str2, "Hello world");
    printf("%s\n", str2);

    return 0;
}

