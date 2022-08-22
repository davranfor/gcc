#include <stdio.h>
#include <stdlib.h>

extern void *__real_malloc(size_t);
extern void *__real_calloc(size_t, size_t);
extern void *__real_realloc(void *, size_t);

void *__wrap_malloc(size_t size)
{
    puts("calling malloc");
    return __real_malloc(size);
}

void *__wrap_calloc(size_t num, size_t size)
{
    puts("calling calloc");
    return __real_calloc(num, size);
}

void *__wrap_realloc(void *ptr, size_t size)
{
    puts("calling realloc");
    return __real_realloc(ptr, size);
}

