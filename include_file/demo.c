/**
 * -include file
 * Process file as if "#include "file"" appeared as the first line of the primary source file. 
 * However, the first directory searched for file is the preprocessor's working directory
 * instead of the directory containing the main source file. If not found there,
 * it is searched for in the remainder of the "#include "..."" search chain as normal.
 *
 * If multiple -include options are given, the files are included in the order they appear on
 * the command line.

gcc -Wall -Wpedantic -include "types.h" -o demo demo.c

 */

#include <stdio.h>

int main(void)
{
    DWORD number = 42;

    printf("%lu\n", number);
    return 0;
}
